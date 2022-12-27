#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Employee {
	string name;
	int salary;
	string dob;
	string address;
	int mobNo;
	public:
	void get_data() {
		cout << "Name: ";
		cin >> name;
		cout << "Salary: ";
		cin  >> salary;
		cout << "Date of Birth: ";
		cin >> dob;
		cout << "Address: ";
		//getline(cin,address);
		cin >> address;
		cout << "Mobile No.:";
		cin >> mobNo;
		cout << endl;
	}
	void display_data(int no) {
		char buffer[100];
		sprintf(buffer,"Displaying details of Employee No. %d: ",no);
		cout << buffer << endl;		
		cout << "Name: " << name;
		cout << "\nSalary: " << salary;
		cout << "\nDate of Birth: "<< dob;
		cout << "\nAddress: " << address;
		cout << "\nMobile No.:" << mobNo;
		cout << endl << endl;
	}
};

int main() {
	cout << "**********WELCOME TO EMPLOYEE DATABASE PROGRAM************";
	int n;
	cout <<"\n Enter the no. of employees: ";
	cin >> n;
	vector<Employee> arr(n);
	int cnt = 0;
	cout << "\n Now enter the details of each employee one by one: \n\n";
	for(int i = 0; i < n; i++) {
		char buffer[100];
		sprintf(buffer,"Inputting details of Employee %d :", i + 1);
		cout << buffer << endl;
		Employee e;
		e.get_data();
		arr[cnt] = e;
		cnt ++;
	}
	cout << "Input Done\n";
	cout << "\nNow have a look to the data you have given: \n\n";
	for(int i = 0; i < n; i++) {
		arr[i].display_data(i + 1);
	}
	cout << "*****************EXITING THE PROGRAM*********************\n";
}
		








