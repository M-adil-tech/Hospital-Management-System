#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
#include<stdlib.h>
#include<ctime>
#include"hospital.h"
void login(string username, string password, admin_module a) {
	string username1, password1;
	string check = "Login successfully.";
	cout << endl;
	bool login = false;
	do {

		cout << "-----------Welcome to login page--------------" << endl;
		cout << " please enter username: " << endl;
		cin >> username1;
		cout << "please enter password: " << endl;
		cin >> password1;
		ifstream myfile("accounts.txt");
		if (myfile.is_open())
		{
			while (!myfile.eof())
			{

				if (username1 == a.username && password1 == a.password)
				{
					cout << check;
					login = true;
					system("pause");
					system("cls");

					break;
				}
				else
				{
					cout << "Wrong username or password!" << endl;
					break;
				}
			}
		}
		myfile.close();

	} while (!login == true);
}

void create_login(string username, string password, admin_module a) {
	//SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);

	cout << "-----------------welcome to signup page---------------------" << endl;
	cout << "please create your username" << endl;
	cin >> a.username;
	cout << "please create your password" << endl;
	cin >> a.password;
	ofstream createaccount;
	createaccount.open("accounts.txt");
	createaccount << a.username << " " << a.password;
	createaccount.close();
	cout << "Data sucessfully saved" << endl;
	system("pause");
	system("cls");
	login(username, password, a);
}
void dashboard(admin_module obj, patient_module obj1, Doctor_module obj2) {
	int op1;
	string a, b, c, d;
	do {

		cout << "\t\t_____________________________________" << endl;
		cout << "\t\t|Press 1 to Login as a administartor|" << endl;
		cout << "\t\t|press 2 to Login as a Patient      |" << endl;
		cout << "\t\t|Press 3 to Login as a Doctor       |" << endl;
		cout << "\t\t|Press 4 to Exit the programe       |" << endl;
		cout << "\t\t|___________________________________|" << endl;
		cin >> op1;
		switch (op1)
		{
		case 1:
			create_login(a, b, obj);
			obj.admin();

			break;
		case 2:
			create_login(c, d, obj1);
			obj1.admin1();
			break;
		case 3:
			create_login(a, b, obj2);
			obj2.admin2();
			break;
		case 4:
			exit(0);
			break;

			cout << "invalid input" << endl;
			break;
		}
	} while (op1 != 4);

	system("cls");
}
using namespace std;
int main() {
	admin_module a;
	patient_module p;
	Doctor_module d;
	dashboard(a, p, d);

}
