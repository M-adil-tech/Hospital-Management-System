#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
#include<stdlib.h>
#include<ctime>
#include"hospital.h"
using namespace std;
void admin_module::newdoc() {

	D_id = D_id + 2;
	cout << "please Enter your First Name" << endl;
	cin >> d_first_name;
	cout << "please Enter the your Last Name" << endl;
	cin >> d_last_name;
	cout << "please Enter your Department" << endl;
	cin >> d_department;
	cout << "Your Doctor ID is" << D_id << endl;
	cout << "please Enter the Regesteration Date" << endl;
	cin >> d_regdate;
	cout << "please Enter your Gender" << endl;
	cin >> d_gender;
	cout << "please Enter your Blood Group " << endl;
	cin >> d_blood_group;
	cout << "please Enter your Contact Number" << endl;
	cin >> d_contact;
	cout << "please Enter the Address" << endl;
	cin >> d_address;
	cout << "please Enter the Qualification" << endl;
	cin >> d_qualification;
	cout << "please Enter the Salary" << endl;
	cin >> d_salary;

	ofstream fin1;
	fin1.open("Doctor.txt", ios::app);
	if (fin1.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		//fin1 << endl;
		fin1 << D_id << endl;
	fin1 << d_first_name << endl;
	fin1 << d_last_name << endl;
	fin1 << d_department << endl;
	fin1 << d_regdate << endl;
	fin1 << d_gender << endl;
	fin1 << d_blood_group << endl;
	fin1 << d_contact << endl;
	fin1 << d_address << endl;
	fin1 << d_qualification << endl;
	fin1 << d_salary << endl;
	fin1.close();
}
void admin_module::addpatient() {
	p_id = p_id + 2;
	cout << "please Enter your First Name" << endl;
	cin >> p_first_name;
	cout << "please Enter the your Last Name" << endl;
	cin >> p_last_name;
	cout << "please Enter your Department" << endl;
	cin >> p_department;
	cout << "Your Patient Id is " << p_id << endl;
	cout << "please Enter the Regesteration Date" << endl;
	cin >> p_regdate;
	cout << "please Enter your Gender" << endl;
	cin >> p_gender;
	cout << "please Enter your Blood Group " << endl;
	cin >> p_blood_group;
	cout << "please Enter your Contact Number" << endl;
	cin >> p_contact;
	cout << "please Enter the Address" << endl;
	cin >> p_address;
	cout << "please Enter the Fees Status" << endl;
	cin >> feestatus;
	cout << "please Enter the Qualification" << endl;
	cin >> qualification;
	cout << "please Enter the Salary" << endl;
	cin >> salary;
	ofstream fin;
	fin.open("patient.txt", ios::app);
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		//fin << endl;
		fin << p_id << endl;
	fin << p_first_name << endl;
	fin << p_last_name << endl;
	fin << p_department << endl;
	fin << p_regdate << endl;
	fin << p_gender << endl;
	fin << p_blood_group << endl;
	fin << p_contact << endl;
	fin << p_address << endl;
	fin << feestatus << endl;
	fin << qualification << endl;
	fin << salary << endl;
	fin.close();
}
void admin_module::appointment() {
	ofstream fin;
	fin.open("appointment.txt", ios::app);
	cout << "please Enter your Department" << endl;
	cin >> d_department;
	cout << "please Enter your Appointment Status" << endl;
	cin >> app_status;
	cout << "please Enter your appointment date" << endl;
	cin >> app_date;
	cout << "please Enter your appointment time" << endl;
	cin >> app_time;
	app_id++;
	cout << "Your Patient Appointment Id is " << app_id;
	fin << app_id << endl;
	fin << d_department << endl;
	fin << app_status << endl;
	fin << app_date << endl;
	fin << app_time << endl;
	fin.close();

}
void admin_module::assign() {
	ifstream fin;
	//int id;
	cout << "Your appointment ID is" << app_id << endl;
	cout << "please Enter Department for appointment" << endl;
	cin >> d_department;
	cout << "please Enter your appointment date" << endl;
	cin >> app_date;
	cout << "please Enter your appointment time" << endl;
	cin >> app_time;
	fin.open("Doctor.txt");
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		fin >> D_id;
	fin >> d_first_name;
	fin >> d_last_name;
	fin >> d_department;
	fin >> d_regdate;
	fin >> d_gender;
	fin >> d_blood_group;
	fin >> d_contact;
	fin >> d_address;
	fin >> d_qualification;
	fin >> d_salary;
	cout << "Your appointment is with Dr " << d_first_name << " " << d_last_name << endl;
	fin.close();
	cout << "Your appointment is at :" << app_time << endl;
	ofstream myfile("assign.txt", ios::app);
	myfile << app_id << endl;
	myfile << d_department << endl;
	myfile << app_date << endl;
	myfile << app_time << endl;
	myfile.close();

}
void admin_module::edit_patient() {
	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("patient.txt", ios::in);
	fout.open("new.txt");
	cout << "Please Enter patient ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	
	

		fin >> p_id;
		fin >> p_first_name;
		fin >> p_last_name;
		fin >> p_department;
		fin >> p_regdate;
		fin >> p_gender;
		fin >> p_blood_group;
		fin >> p_contact;
		fin >> p_address;
		fin >> feestatus;
		fin >> qualification;
		fin >> salary;
		while (!fin.eof()){
		fin >> p_id;
		fin >> p_first_name;
		fin >> p_last_name;
		fin >> p_department;
		fin >> p_regdate;
		fin >> p_gender;
		fin >> p_blood_group;
		fin >> p_contact;
		fin >> p_address;
		fin >> feestatus;
		fin >> qualification;
		fin >> salary;

		
			if (idcheck == p_id)
			{
				cout << "Id found " << endl;
				cout << "please Enter your First Name" << endl;
				cin >> p_first_name;
				cout << "please Enter the your Last Name" << endl;
				cin >> p_last_name;
				cout << "please Enter the Fees Status" << endl;
				cin >> feestatus;
				cout << "please Enter the Address" << endl;
				cin >> p_address;
				cout << "please Enter your Contact Number" << endl;
				cin >> p_contact;

				fout << p_id << endl;
				fout << p_first_name << endl;
				fout << p_last_name << endl;
				fout << p_department << endl;
				fout << p_regdate << endl;
				fout << p_gender << endl;
				fout << p_blood_group << endl;
				fout << p_contact << endl;
				fout << p_address << endl;
				fout << feestatus << endl;
				fout << qualification << endl;
				fout << salary << endl;
				cout << "Data Updated" << endl;
			}
			else
			{
				fout << p_id;
				fout << p_first_name;
				fout << p_last_name;
				fout << p_department;
				fout << p_regdate;
				fout << p_gender;
				fout << p_blood_group;
				fout << p_contact;
				fout << p_address;
				fout << feestatus;
				fout << qualification;
				fout << salary;

			}

		}

		fin.close();
		fout.close();
		remove("patient.txt");
		rename("new.txt", "patient.txt");
		
	
}
void admin_module::edit_doctor() {

	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("Doctor.txt", ios::in);
	fout.open("temp1.txt");
	cout << "Please Enter Doctor ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	
	
		fin >> D_id;
		fin >> d_first_name;
		fin >> d_last_name;
		fin >> d_department;
		fin >> d_regdate;
		fin >> d_gender;
		fin >> d_blood_group;
		fin >> d_contact;
		fin >> d_address;
		fin >> d_qualification;
		fin >> d_salary;
		while (!fin.eof())
		{
			fin >> D_id;
			fin >> d_first_name;
			fin >> d_last_name;
			fin >> d_department;
			fin >> d_regdate;
			fin >> d_gender;
			fin >> d_blood_group;
			fin >> d_contact;
			fin >> d_address;
			fin >> d_qualification;
			fin >> d_salary;
			if (idcheck == D_id)
			{
				cout << "Please Update the Data" << endl;
				cout << "please Enter the Address" << endl;
				cin >> d_address;
				cout << "please Enter your Contact Number" << endl;
				cin >> d_contact;
				cout << "please Enter the Qualification" << endl;
				cin >> d_qualification;
				cout << "please Enter the Salary" << endl;
				cin >> d_salary;
				fout << D_id << endl;
				fout << d_first_name << endl;
				fout << d_last_name << endl;
				fout << d_department << endl;
				fout << d_regdate << endl;
				fout << d_gender << endl;
				fout << d_blood_group << endl;
				fout << d_contact << endl;
				fout << d_address << endl;
				fout << d_qualification << endl;
				fout << d_salary;
				cout << "Data Updated" << endl;
			}
			else
			{
				fout << D_id << endl;
				fout << d_first_name << endl;
				fout << d_last_name << endl;
				fout << d_department << endl;
				fout << d_regdate << endl;
				fout << d_gender << endl;
				fout << d_blood_group << endl;
				fout << d_contact << endl;
				fout << d_address << endl;
				fout << d_qualification << endl;
				fout << d_salary;
			}


		}
	
	fin.close();
	fout.close();
	remove("Doctor.txt");
	rename("temp1.txt", "Doctor.txt");
}
void admin_module::update_appointment() {
	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("appointment.txt", ios::in);
	fout.open("temp.txt");
	cout << "Please Enter appointment ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
	{
		fin >> app_id;
		fin >> d_department;
		fin >> app_status;
		fin >> app_date;
		fin >> app_time;

		while (!fin.eof())
		{
			fin >> app_id;
			fin >> d_department;
			fin >> app_status;
			fin >> app_date;
			fin >> app_time;

			if (idcheck == app_id)
			{
				cout << "Please Update the Data" << endl;
				cout << "please Enter your new appointment date" << endl;
				cin >> app_date;
				cout << "please Enter your appointment time" << endl;
				cin >> app_time;
				cout << "Data Updated" << endl;
				fout << app_id << endl;
				fout << d_department << endl;
				fout << app_status << endl;
				fout << app_date << endl;
				fout << app_time << endl;

			}
			else
			{
				fout << app_id << endl;
				fout << d_department << endl;
				fout << app_status << endl;
				fout << app_date << endl;
				fout << app_time << endl;

			}


		}
		fin.close();
		fout.close();
		remove("appointment.txt");
		rename("temp.txt", "appointment.txt");


	}
}
void admin_module::view_doctor()
{
	int check = 1;
	ifstream fout;
	fout.open("Doctor.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}

	//cout << "Data of the Doctors is as Follows" << endl;
	/*fout >> D_id;
	fout >> d_first_name;
	fout >> d_last_name;
	fout >> d_department;
	fout >> d_regdate;
	fout >> d_gender;
	fout >> d_blood_group;
	fout >> d_contact;
	fout >> d_address;
	fout >> d_feestatus;
	fout >> d_qualification;
	fout >> d_salary;*/
	while (!fout.eof()) {
		fout >> D_id;
		fout >> d_first_name;
		fout >> d_last_name;
		fout >> d_department;
		fout >> d_regdate;
		fout >> d_gender;
		fout >> d_blood_group;
		fout >> d_contact;
		fout >> d_address;
		fout >> d_qualification;
		fout >> d_salary;
		//cout << "\t\tData of Doctor:" << check << endl;
		cout << "---------------------------------Data of Doctor" << check << "-------------------------------- - " << endl;
		cout << D_id << "\t" << d_first_name << "\t" << d_last_name << "\t" << d_gender << "\t" << d_qualification << "\t" << d_contact << endl;
		check++;
	}

	fout.close();
}
void admin_module::view_patient() {
	int check = 1;
	ifstream fout;
	fout.open("patient.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		cout << "Data of the Patient is as Follows" << endl;
	/*fout >> p_id;
	fout >> p_first_name;
	fout >> p_last_name;
	fout >> p_department;
	fout >> p_regdate;
	fout >> p_gender;
	fout >> p_blood_group;
	fout >> p_contact;
	fout >> p_address;
	fout >> feestatus;
	fout >> qualification;
	fout >> salary;*/
	while (!fout.eof()) {
		fout >> p_id;
		fout >> p_first_name;
		fout >> p_last_name;
		fout >> p_department;
		fout >> p_regdate;
		fout >> p_gender;
		fout >> p_blood_group;
		fout >> p_contact;
		fout >> p_address;
		fout >> feestatus;
		fout >> qualification;
		fout >> salary;
		cout << "-------------------Data of Patient: " << check << "-----------------" << endl;;
		cout << p_id << "\t" << p_first_name << "\t" << p_last_name << "\t" << p_department << endl;
		check++;

	}

	fout.close();


}
void admin_module::view_appointment() {

	int check = 1;
	ifstream myfile;
	myfile.open("appointment.txt");
	if (myfile.fail())
	{
		cout << "Input file opening failed.\n";

	}

	cout << "----------------Data of the appointment is as Follows-----------------" << endl;
	myfile >> app_id;
	myfile >> d_department;
	myfile >> app_status;
	myfile >> app_date;
	myfile >> app_time;

	while (!myfile.eof()) {
		myfile >> app_id;
		myfile >> d_department;
		myfile >> app_status;
		myfile >> app_date;
		myfile >> app_time;
		cout << "Appointment Records are:" << check << endl;

		cout << "Appointment ID :" << app_id << "\t" << "Department:" << d_department << "\t" << "Status: " << app_status << "\t" << "Appointment Date: " << app_date << "\t" << "Appointment Time:" << app_time << endl;
		//cout << "Appointment Date: " << app_date << "\t" << "Appointment Time:" << app_time << endl;
		check++;


		myfile.close();






	}

	myfile.close();



}
void admin_module::fee_status() {
	int checkid1;
	cout << "please Enter Your Patient Id" << endl;
	cin >> checkid1;
	ifstream fout;
	fout.open("patient.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		cout << "Data of the Patient is as Follows" << endl;
	fout >> p_id;
	fout >> p_first_name;
	fout >> p_last_name;
	fout >> p_department;
	fout >> p_regdate;
	fout >> p_gender;
	fout >> p_blood_group;
	fout >> p_contact;
	fout >> p_address;
	fout >> feestatus;
	fout >> qualification;
	fout >> salary;
	while (!fout.eof()) {
		fout >> p_id;
		fout >> p_first_name;
		fout >> p_last_name;
		fout >> p_department;
		fout >> p_regdate;
		fout >> p_gender;
		fout >> p_blood_group;
		fout >> p_contact;
		fout >> p_address;
		fout >> feestatus;
		fout >> qualification;
		fout >> salary;
		if (p_id == checkid1) {

			cout << "Fee Staus of the patient is: " << feestatus << endl;

		}
		else
			cout << "ID Not Found" << endl;


	}

	fout.close();


}
void admin_module::admin() {


	int op;
	do {

		cout << endl;
		cout << "\t\tPress 1 to Add New Doctor" << endl;
		cout << "\t\tpress 2 to Add New Patient " << endl;
		cout << "\t\tPress 3 to Add New Appointment" << endl;
		cout << "\t\tPress 4 to Assign Appointment" << endl;
		cout << "\t\tPress 5 to Edit patient's Detail" << endl;
		cout << "\t\tpress 6 to Edit Doctor's Detail " << endl;
		cout << "\t\tPress 7 to Update Appointment" << endl;
		cout << "\t\tPress 8 to View all Doctors Detail" << endl;
		cout << "\t\tPress 9 to View all Patient Detail" << endl;
		cout << "\t\tpress 10 to View all Appointment Detail " << endl;
		cout << "\t\tPress 11 to view Fees Status" << endl;
		cout << "\t\tPress 12 to exit" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			newdoc();
			break;
		case 2:
			addpatient();
			break;
		case 3:
			appointment();
			break;
		case 4:
			assign();
			break;
		case 5:
			edit_patient();
			break;
		case 6:
			edit_doctor();
			break;
		case 7:
			update_appointment();
			break;
		case 8:
			view_doctor();
			break;
		case 9:
			view_patient();
			break;
		case 10:
			view_appointment();
			break;
		case 11:
			fee_status();
			break;
		case 12:
			exit(0);
			break;

			cout << "invalid input" << endl;
			break;
		}
	} while (op != 13);
}
void patient_module::view_app() {
	int checkid, check;
	cout << "please Enter Your Patient Id" << endl;
	cin >> checkid;
	ifstream fout;
	fout.open("patient.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		cout << "Data of the Patient is as Follows" << endl;
	fout >> p_id;
	fout >> p_first_name;
	fout >> p_last_name;
	fout >> p_department;
	fout >> p_regdate;
	fout >> p_gender;
	fout >> p_blood_group;
	fout >> p_contact;
	fout >> p_address;
	fout >> feestatus;
	fout >> qualification;
	fout >> salary;
	while (!fout.eof()) {
		fout >> p_id;
		fout >> p_first_name;
		fout >> p_last_name;
		fout >> p_department;
		fout >> p_regdate;
		fout >> p_gender;
		fout >> p_blood_group;
		fout >> p_contact;
		fout >> p_address;
		fout >> feestatus;
		fout >> qualification;
		fout >> salary;
		if (p_id == checkid) {

			int check = 1;
			ifstream myfile;
			myfile.open("appointment.txt");
			if (fout.fail())
			{
				cout << "Input file opening failed.\n";

			}
			cout << "Data of the appointment is as Follows" << endl;
			myfile >> app_id;
			myfile >> d_department;
			myfile >> app_status;
			myfile >> app_date;
			myfile >> app_time;
			while (!fout.eof()) {
				myfile >> app_id;
				myfile >> d_department;
				myfile >> app_status;
				myfile >> app_date;
				myfile >> app_time;
				cout << "Appointment Records are:" << check << endl;

				cout << "Appointment ID :" << app_id << "\t" << "Department:" << d_department << "\t" << "Status: " << app_status << endl;
				cout << "Appointment Date: " << app_date << "\t" << "Appointment Time:" << app_time << endl;
				check++;
			}

			myfile.close();

		}
		else
			cout << "ID Not Found" << endl;


	}

	fout.close();
}
void patient_module::check_fee() {
	int checkid1;
	cout << "please Enter Your Patient Id" << endl;
	cin >> checkid1;
	ifstream fout;
	fout.open("patient.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
		cout << "Data of the Patient is as Follows" << endl;
	fout >> p_id;
	fout >> p_first_name;
	fout >> p_last_name;
	fout >> p_department;
	fout >> p_regdate;
	fout >> p_gender;
	fout >> p_blood_group;
	fout >> p_contact;
	fout >> p_address;
	fout >> feestatus;
	fout >> qualification;
	fout >> salary;
	while (!fout.eof()) {
		fout >> p_id;
		fout >> p_first_name;
		fout >> p_last_name;
		fout >> p_department;
		fout >> p_regdate;
		fout >> p_gender;
		fout >> p_blood_group;
		fout >> p_contact;
		fout >> p_address;
		fout >> feestatus;
		fout >> qualification;
		fout >> salary;
		if (p_id == checkid1) {

			cout << "Fee Staus of the patient is: " << feestatus << endl;

		}
		else
			cout << "ID Not Found" << endl;


	}

	fout.close();

}
void patient_module::admin1() {
	int op;


	do {

		cout << endl;
		cout << "\t\tpress 1 to View all Appointment Detail " << endl;
		cout << "\t\tPress 2 to view Fees Status" << endl;
		cout << "\t\tPress 3 to exit " << endl;
		cin >> op;
		switch (op)
		{
		case 1:

			view_appointment();
			break;
		case 2:
			check_fee();
			break;
		case 3:
			exit(0);
			break;


			cout << "invalid input" << endl;
			break;
		}
	} while (op != 3);

}
void Doctor_module::update() {
	ifstream fin;
	ofstream fout;
	int idcheck;
	fin.open("appointment.txt", ios::in);
	fout.open("temp.txt");
	cout << "Please Enter appointment ID" << endl;
	cin >> idcheck;
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";

	}
	else
	{
		fin >> app_id;
		fin >> d_department;
		fin >> app_status;
		fin >> app_date;
		fin >> app_time;

		while (!fin.eof())
		{
			fin >> app_id;
			fin >> d_department;
			fin >> app_status;
			fin >> app_date;
			fin >> app_time;

			if (idcheck == app_id)
			{
				cout << "Please Update the Data" << endl;
				cout << "please Enter your new appointment date" << endl;
				cin >> app_date;
				cout << "please Enter your appointment time" << endl;
				cin >> app_time;
				cout << "Data Updated" << endl;
				fout << app_id << endl;
				fout << d_department << endl;
				fout << app_status << endl;
				fout << app_date << endl;
				fout << app_time << endl;

			}
			else
			{
				fout << app_id << endl;
				fout << d_department << endl;
				fout << app_status << endl;
				fout << app_date << endl;
				fout << app_time << endl;

			}


		}
		fin.close();
		fout.close();
		remove("appointment.txt");
		rename("temp.txt", "appointment.txt");


	}

}
void Doctor_module::view() {
	int checkid, check;
	cout << "please Enter Your Doctor Id" << endl;
	cin >> checkid;
	ifstream fout;
	fout.open("Doctor.txt");
	if (fout.fail())
	{
		cout << "Input file opening failed.\n";

	}

	//cout << "Data of the Patient is as Follows" << endl;
	/*fout >> D_id;
fout >> d_first_name;
fout >> d_last_name;
fout >> d_department;
fout >> d_regdate;
fout >> d_gender;
fout >> d_blood_group;
fout >> d_contact;
fout >> d_address;
fout >> d_feestatus;
fout >> d_qualification;
fout >> d_salary;*/
	while (!fout.eof()) {
		fout >> D_id;
		fout >> d_first_name;
		fout >> d_last_name;
		fout >> d_department;
		fout >> d_regdate;
		fout >> d_gender;
		fout >> d_blood_group;
		fout >> d_contact;
		fout >> d_address;
		fout >> d_qualification;
		fout >> d_salary;
		if (D_id == checkid) {

			int check = 1;
			ifstream myfile;
			myfile.open("appointment.txt");
			if (fout.fail())
			{
				cout << "Input file opening failed.\n";

			}
			cout << "Data of the appointment is as Follows" << endl;
			myfile >> app_id;
			myfile >> d_department;
			myfile >> app_status;
			myfile >> app_date;
			myfile >> app_time;
			while (!fout.eof()) {
				myfile >> app_id;
				myfile >> d_department;
				myfile >> app_status;
				myfile >> app_date;
				myfile >> app_time;
				cout << "Appointment Records are:" << check << endl;

				cout << "Appointment ID :" << app_id << "\t" << "Appointment Time:" << app_time << "\t" << "Status: " << app_status << endl;
				check++;
			}

			myfile.close();

		}
		else
			cout << "ID Not Found" << endl;


	}

	fout.close();

}
void Doctor_module::admin2() {
	int op;


	do {

		cout << endl;
		cout << "\t\tpress 1 to View all Appointment Detail " << endl;
		cout << "\t\tPress 2 to Update Appointment" << endl;
		cout << "\t\tPress 3 to exit " << endl;
		cin >> op;
		switch (op)
		{
		case 1:

			view_appointment();
			break;
		case 2:
			update();
			break;
		case 3:
			exit(0);
			break;


			cout << "invalid input" << endl;
			break;
		}
	} while (op != 3);
}
