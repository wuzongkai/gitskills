#include "introduce.h"
int linkman_size = 0;//初始联系人为零个
//功能目录
addressMsg am;
void menu() {
	system("color 2");
	cout << "*****************************" << endl;
	cout << "******\t1.添加联系人\t*****" << endl;
	cout << "******\t2.显示联系人\t*****" << endl;
	cout << "******\t3.删除联系人\t*****" << endl;
	cout << "******\t4.修改联系人\t*****" << endl;
	cout << "******\t5.清空联系人\t*****" << endl;
	cout << "******\t0.退出系统\t*****" << endl;
	cout << "*****************************" << endl;
}
//插入联系人方式
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
		cout << "系统最多保存1000个人的联系方式！" << endl;
		system("pause");
		exit(0);
	}
	else {
		cout << "请根据提示录入学生的信息!" << endl;
		cout << "请输入联系人姓名" << endl;
		cin >> am.linkman[linkman_size].name;
		cout << "请输入联系人电话号码"<< endl;
		cin >> am.linkman[linkman_size].iponeNum;
		cout << "请输入联系人地址"<< endl;
		cin >> am.linkman[linkman_size].address;
		cout << "请输入联系人年龄"<< endl;
		cin >> am.linkman[linkman_size].age;
		cout << "请输入联系人性别：0：男，1：女"<< endl;
		cin >> am.linkman[linkman_size].sex;
		if (am.linkman[linkman_size].sex == 0) {
			linkmansex = "男";
		}
		else if(am.linkman[linkman_size].sex == 1) {
			linkmansex = "女";
		}
		//system("cls");
		cout << "添加的联系人信息：" <<
			"\n\t姓名:" << am.linkman[linkman_size].name <<
			"\n\t电话号码:" << am.linkman[linkman_size].iponeNum <<
			"\n\t联系人地址：" << am.linkman[linkman_size].address <<
			"\n\t联系人年龄:" << am.linkman[linkman_size].age <<
			"\n\t联系人性别:" << linkmansex << endl;
	}
	linkman_size++;//添加联系人成功后，联系人个数加一
	cout << "添加联系人成功!" << endl;
	system("pause");
}
//显示联系人方式
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
		cout << "没有找到联系人!" << endl;
	}
	else {
		cout << "系统中存放的联系人信息" << endl;
		for (i = 0; i < linkman_size; i++) {
			if (am.linkman[i].sex == 0) {
				linkmansex = "男";
			}
			else {
				linkmansex = "女";
			}
			cout <<
				"\n\t姓名:" << am.linkman[i].name <<
				"\n\t电话号码:" << am.linkman[i].iponeNum <<
				"\n\t联系人地址：" << am.linkman[i].address <<
				"\n\t联系人年龄:" << am.linkman[i].age <<
				"\n\t联系人性别:" << linkmansex << endl;
		}
	}
	system("pause");
}
//根据联系人姓名进行对联系人进行删除
void deleteLinkman() {
	system("cls");
	string linkmanName;
	int i,index;
	cout << "请输入联系人姓名进行对联系人进行删除:" << endl;
	cin >> linkmanName;
	for (i = 0; i < linkman_size; i++) {
		if (am.linkman[i].name==linkmanName) {
			index = i;
		}
	}
	for (i = index; i < linkman_size; i++) {
		am.linkman[i] = am.linkman[i + 1];
	}
	linkman_size--;//删除成功后，联系人个数减一
	cout << "删除" << linkmanName << "成功!" << endl;
	system("pause");
}
void updateLinkman() {
	system("cls");
	string linkmanName, linkmansex;
	int i,j;
	cout << "请输入联系人姓名进行对联系人进行修改:" << endl;
	cin >> linkmanName;
	for (i = 0; i < linkman_size; i++) {
		if (am.linkman[i].name == linkmanName) {
			j = i;
			cout << "请输入联系人姓名" << endl;
			cin >> am.linkman[i].name;
			cout << "请输入联系人电话号码" << endl;
			cin >> am.linkman[i].iponeNum;
			cout << "请输入联系人地址" << endl;
			cin >> am.linkman[i].address;
			cout << "请输入联系人年龄" << endl;
			cin >> am.linkman[i].age;
			cout << "请输入联系人性别：0：男，1：女" << endl;
			cin >> am.linkman[i].sex;
		}
	}
	cout << "更改联系人信息成功！修改后的结果：" << endl;
	if (am.linkman[i].sex == 0) {
		linkmansex = "男";
	}
	else {
		linkmansex = "女";
	}
	cout <<
		"\n\t姓名:" << am.linkman[j].name <<
		"\n\t电话号码:" << am.linkman[j].iponeNum <<
		"\n\t联系人地址：" << am.linkman[j].address <<
		"\n\t联系人年龄:" << am.linkman[j].age <<
		"\n\t联系人性别:" << linkmansex << endl;
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
	cout << "清理完成！" << endl;
	system("pause");
}
