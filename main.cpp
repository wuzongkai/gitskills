#include "introduce.h"
int main() {
	int inputNum;
	while (1) {
		system("cls");
		menu();
		cout << "请你选择:";
		cin >> inputNum;
		switch (inputNum) {
		case 1://添加联系人
			insertLinkman();
			break;
		case 2://显示联系人
			showLinkman();
			break;
		case 3://删除联系人
			deleteLinkman();
			break;
		case 4://修改联系人
			updateLinkman();
			break;
		case 5://清空联系人
			emptyLinkman();
			break;
		case 0://退出系统
			while (1) {
				string Choice;
				cout << "确认退出系统？Y/N" << endl;
				cin >> Choice;
				if (Choice == "Y" || Choice == "y") {
					cout << "你选择退出系统!" << endl;;
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
