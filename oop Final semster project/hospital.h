#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
#include<Windows.h>
using namespace std;
class admin_module {
public:
	string username;
	string password;
	string d_first_name;
	string d_last_name;
	string p_first_name;
	string p_last_name;
	string p_department;
	string d_department;
	string d_department1;
	string dental;
	string Accidental;
	string ortho;
	string psy;
	string phy;
	int D_iddental;
	int D_idAccidental;
	int D_idortho;
	int D_idpsy;
	int D_idphy;
	int D_id;
	int p_id;
	string d_regdate;
	string p_regdate;
	string p_gender;
	string d_gender;
	string d_contact;
	string p_contact;
	string d_blood_group;
	string p_blood_group;
	string d_address;
	string p_address;
	string feestatus;
	string qualification;
	int salary;
	//string d_feestatus;
	string d_qualification;
	int d_salary;
	int app_id;
	string app_status;
	string app_time;
	string app_date;
public:
	admin_module() {
		Accidental = "Accident & Emergency";
		ortho = "Orthopedics";
		psy = "Psychiatry";
		phy = "Physiotherapy";
		D_iddental = 1000;
		D_idAccidental = 1011;
		D_idortho = 10100;
		D_idpsy = 1100;
		D_idphy = 1001;
		D_id = 1000;
		p_id = 1000;
		app_id = 1000;

	}
public:
	void newdoc();
	void admin();
	void addpatient();
	void appointment();
	void assign();
	void edit_patient();
	void edit_doctor();
	void update_appointment();
	void view_doctor();
	void view_patient();
	void fee_status();
	void view_appointment();
};
class patient_module : public admin_module {
public:
	void admin1();
	void view_app();
	void check_fee();
};
class Doctor_module :public admin_module {
public:
	void admin2();
	void view();
	void update();
};
#pragma once
#pragma once
