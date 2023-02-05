#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>
#include <ios>
using namespace std;

void enrollmentSlip(string &name, string &course, string &yearname, double &units, double &tuitionFee, double &balance, double &downpayment);
void freshmanInfo(double &units, string &name, string &course);
void sophomoreInfo(double &units, string &name, string &course);
void JuniorInfo(double &units, string &name, string &course);
void SeniorInfo(double &units, string &name, string &course);
void studentInfo(string &name, string &course, int &yearlvl, double &units, string &yearname);


void enrollmentSlip(string &name, string &course, string &yearname, double &units, double &tuitionFee, double &balance, double &downpayment){
		
	system("CLS");
	cout << setw(5) << "ENROLLMENT SLIP" << setw(5) << endl;
	cout << "Student Name: " << setw(5) << name << endl;
	cout << "Program/Course: " << setw(5) << course << endl;
	cout << "Year Name: " << setw(5) << yearname << endl;
	cout << "No. of Units: " << setw(5) << units << endl;
	cout << "Downpayment: " << setw(5) << downpayment << endl;
	cout << "Balance: " << setw(5) << balance << endl;
	
}

void freshmanInfo(double &units, string &name, string &course){
	
	const int freshmanRate = 1500;
	string yearname = "freshman";
	double tuitionFee;
	double downpayment;
	double balance;
	
	tuitionFee = units * freshmanRate;
	downpayment = 0.3 * tuitionFee;
	balance = tuitionFee - downpayment;
	
	enrollmentSlip(name, course, yearname, units, tuitionFee, balance, downpayment);	
}

void sophomoreInfo(double &units, string &name, string &course){
	
	const int sophomoreRate = 1800;
	string yearname = "sophomore";
	double tuitionFee;
	double downpayment;
	double balance;
	
	tuitionFee = units * sophomoreRate;
	downpayment = 0.3 * tuitionFee;
	balance = tuitionFee - downpayment;
	
	enrollmentSlip(name, course, yearname, units, tuitionFee, balance, downpayment);
}

void JuniorInfo(double &units, string &name, string &course){
	
	const int JuniorRate = 2000;
	string yearname = "Junior";
	double tuitionFee;
	double downpayment;
	double balance;
	
	tuitionFee = units * JuniorRate;
	downpayment = 0.3 * tuitionFee;
	balance = tuitionFee - downpayment;
	
	enrollmentSlip(name, course, yearname, units, tuitionFee, balance, downpayment);
}

void SeniorInfo(double &units, string &name, string &course){
	
	const int SeniorRate = 2300;
	string yearname = "Senior";
	double tuitionFee;
	double downpayment;
	double balance;
	
	tuitionFee = units * SeniorRate;
	downpayment = 0.3 * tuitionFee;
	balance = tuitionFee - downpayment;
	
	enrollmentSlip(name, course, yearname, units, tuitionFee, balance, downpayment);
}

void studentInfo(string &name, string &course, int &yearlvl, double &units, string &yearname){
	
	string freshman;
	string sophomore;
	string Junior;
	string Senior;
	
	cout << "Student name: ";
	getline(cin,name);
	
	cout << "Program/Course: ";
	getline(cin,course);
	
	cout << "Year level (Number): ";
	cin >> yearlvl;
	
	cout << "Number of Units Enrolled: ";
	cin >> units;
	
	switch(yearlvl){
		
		case 1:
			
			yearname = freshman;
			freshmanInfo(units, name, course);
		
			break;
		
		case 2:
			
			yearname = sophomore;
			sophomoreInfo(units, name, course);
			
			break;
			
		case 3:
			
			yearname = Junior;
			JuniorInfo(units, name, course);
		
			break;
			
		case 4 ... 5:

			yearname = Senior;
			SeniorInfo(units, name, course);
		
			break;
	}
}

int main(){

	string name;
	string course;
	int yearlvl;
	double units;
	string yearname;
	
	studentInfo(name, course, yearlvl, units, yearname);
	
	return 0;
}