#include "introduce.h"
int main() {
	int inputNum;
	while (1) {
		system("cls");
		menu();
		cout << "����ѡ��:";
		cin >> inputNum;
		switch (inputNum) {
		case 1://�����ϵ��
			insertLinkman();
			break;
		case 2://��ʾ��ϵ��
			showLinkman();
			break;
		case 3://ɾ����ϵ��
			deleteLinkman();
			break;
		case 4://�޸���ϵ��
			updateLinkman();
			break;
		case 5://�����ϵ��
			emptyLinkman();
			break;
		case 0://�˳�ϵͳ
			while (1) {
				string Choice;
				cout << "ȷ���˳�ϵͳ��Y/N" << endl;
				cin >> Choice;
				if (Choice == "Y" || Choice == "y") {
					cout << "��ѡ���˳�ϵͳ!" << endl;;
					system("pause");
					return 0;
				}
				else if (Choice == "N" || Choice == "n") {
					break;
				}
				else {
					continue;
				}
			}
		default:
			break;
		}
	}
	return 0;
}
