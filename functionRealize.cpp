#include "introduce.h"
int linkman_size = 0;//��ʼ��ϵ��Ϊ���
//����Ŀ¼
addressMsg am;
void menu() {
	system("color 2");
	cout << "*****************************" << endl;
	cout << "******\t1.�����ϵ��\t*****" << endl;
	cout << "******\t2.��ʾ��ϵ��\t*****" << endl;
	cout << "******\t3.ɾ����ϵ��\t*****" << endl;
	cout << "******\t4.�޸���ϵ��\t*****" << endl;
	cout << "******\t5.�����ϵ��\t*****" << endl;
	cout << "******\t0.�˳�ϵͳ\t*****" << endl;
	cout << "*****************************" << endl;
}
//������ϵ�˷�ʽ
//typedef struct Linkman {
//	string name;
//	string iponeNum;
//	string address;
//	int age;
//	string sex;
//}Linkman;
void insertLinkman() {
	system("cls");
	string linkmansex;
	if (linkman_size>1000) {
		cout << "ϵͳ��ౣ��1000���˵���ϵ��ʽ��" << endl;
		system("pause");
		exit(0);
	}
	else {
		cout << "�������ʾ¼��ѧ������Ϣ!" << endl;
		cout << "��������ϵ������" << endl;
		cin >> am.linkman[linkman_size].name;
		cout << "��������ϵ�˵绰����"<< endl;
		cin >> am.linkman[linkman_size].iponeNum;
		cout << "��������ϵ�˵�ַ"<< endl;
		cin >> am.linkman[linkman_size].address;
		cout << "��������ϵ������"<< endl;
		cin >> am.linkman[linkman_size].age;
		cout << "��������ϵ���Ա�0���У�1��Ů"<< endl;
		cin >> am.linkman[linkman_size].sex;
		if (am.linkman[linkman_size].sex == 0) {
			linkmansex = "��";
		}
		else if(am.linkman[linkman_size].sex == 1) {
			linkmansex = "Ů";
		}
		//system("cls");
		cout << "��ӵ���ϵ����Ϣ��" <<
			"\n\t����:" << am.linkman[linkman_size].name <<
			"\n\t�绰����:" << am.linkman[linkman_size].iponeNum <<
			"\n\t��ϵ�˵�ַ��" << am.linkman[linkman_size].address <<
			"\n\t��ϵ������:" << am.linkman[linkman_size].age <<
			"\n\t��ϵ���Ա�:" << linkmansex << endl;
	}
	linkman_size++;//�����ϵ�˳ɹ�����ϵ�˸�����һ
	cout << "�����ϵ�˳ɹ�!" << endl;
	system("pause");
}
//��ʾ��ϵ�˷�ʽ
//typedef struct Linkman {
//	string name;
//	string iponeNum;
//	string address;
//	int age;
//	string sex;
//}Linkman;
void showLinkman() {
	int i;
	string linkmansex;
	if (linkman_size==0) {
		cout << "û���ҵ���ϵ��!" << endl;
	}
	else {
		cout << "ϵͳ�д�ŵ���ϵ����Ϣ" << endl;
		for (i = 0; i < linkman_size; i++) {
			if (am.linkman[i].sex == 0) {
				linkmansex = "��";
			}
			else {
				linkmansex = "Ů";
			}
			cout <<
				"\n\t����:" << am.linkman[i].name <<
				"\n\t�绰����:" << am.linkman[i].iponeNum <<
				"\n\t��ϵ�˵�ַ��" << am.linkman[i].address <<
				"\n\t��ϵ������:" << am.linkman[i].age <<
				"\n\t��ϵ���Ա�:" << linkmansex << endl;
		}
	}
	system("pause");
}
//������ϵ���������ж���ϵ�˽���ɾ��
void deleteLinkman() {
	system("cls");
	string linkmanName;
	int i,index;
	cout << "��������ϵ���������ж���ϵ�˽���ɾ��:" << endl;
	cin >> linkmanName;
	for (i = 0; i < linkman_size; i++) {
		if (am.linkman[i].name==linkmanName) {
			index = i;
		}
	}
	for (i = index; i < linkman_size; i++) {
		am.linkman[i] = am.linkman[i + 1];
	}
	linkman_size--;//ɾ���ɹ�����ϵ�˸�����һ
	cout << "ɾ��" << linkmanName << "�ɹ�!" << endl;
	system("pause");
}
void updateLinkman() {
	system("cls");
	string linkmanName, linkmansex;
	int i,j;
	cout << "��������ϵ���������ж���ϵ�˽����޸�:" << endl;
	cin >> linkmanName;
	for (i = 0; i < linkman_size; i++) {
		if (am.linkman[i].name == linkmanName) {
			j = i;
			cout << "��������ϵ������" << endl;
			cin >> am.linkman[i].name;
			cout << "��������ϵ�˵绰����" << endl;
			cin >> am.linkman[i].iponeNum;
			cout << "��������ϵ�˵�ַ" << endl;
			cin >> am.linkman[i].address;
			cout << "��������ϵ������" << endl;
			cin >> am.linkman[i].age;
			cout << "��������ϵ���Ա�0���У�1��Ů" << endl;
			cin >> am.linkman[i].sex;
		}
	}
	cout << "������ϵ����Ϣ�ɹ����޸ĺ�Ľ����" << endl;
	if (am.linkman[i].sex == 0) {
		linkmansex = "��";
	}
	else {
		linkmansex = "Ů";
	}
	cout <<
		"\n\t����:" << am.linkman[j].name <<
		"\n\t�绰����:" << am.linkman[j].iponeNum <<
		"\n\t��ϵ�˵�ַ��" << am.linkman[j].address <<
		"\n\t��ϵ������:" << am.linkman[j].age <<
		"\n\t��ϵ���Ա�:" << linkmansex << endl;
	system("pause");
}
void emptyLinkman() {
	system("cls");
	for (int i = 0; i < linkman_size; i++) {
		am.linkman[i].address = "";
		am.linkman[i].name = "";
		am.linkman[i].age = 0;
		am.linkman[i].iponeNum = "";
		am.linkman[i].sex = 0;
		linkman_size--;
	}
	linkman_size = 0;
	cout << "������ɣ�" << endl;
	system("pause");
}
