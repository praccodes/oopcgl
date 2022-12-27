#include<bits/stdc++.h>
using namespace std;
class Personal{
	string name;
	int age;
	string address;
	public:
	Personal() {
		name = "NA";
		age = -1;
		address = "NA";	
	}
	void putData() {
		cout << "Enter name: ";
		getline(cin, name);
		cout << "Enter age: ";
		cin >> age;	
		cout << "Enter address: ";
		cin.ignore();
		getline(cin, address);
	}
	void getData() {
		cout << "Name: " << name << endl; 
		cout << "Age: " << age << endl;
		cout << "Address: " << address << endl;
	}	
};
class Academic{
	int Rno, ssc, hsc, fe;
	public :
	Academic() {
		Rno = 0;
		ssc = 0;
		hsc = 0;
		fe = 0;
	}
	void putData() {
		cout << "Enter Roll No. : ";
		cin >> Rno;
		cout << "SSC Marks: ";
		cin >> ssc;
		cout << "HSC Marks: ";
		cin >> hsc;
		cout << "FE Marks: ";
		cin >> fe;
	}
	void getData() {
		cout << "Roll No. : " << Rno << endl;
		cout << "SSC Marks: " << ssc << endl;
		cout << "HSC Marks: " << hsc << endl;
		cout << "FE Marks: " << fe << endl;	
	}
};
class Extra{
	string name[100];
	string award[100];
	int n = 0;
	public :
	void putData() {
		cout << "Enter no. of activities: ";
		cin >> n;
		for(int i = 0; i < n; i++) {
			cout << "Enter Activity name: ";
			cin.ignore();
			getline(cin, name[i]);	
			cout << "Enter award name: ";
			getline(cin, award[i]);
		}	
	}
	void getData() {
		for(int i = 0; i < n; i++) {
			cout << name[i] << " : "<< award[i] << endl;
		}
	}
};
class Biodata:public Personal,public Academic, public Extra {
	public:
	Biodata(){
		Personal();
		Academic();
		Extra();	
	}
	void putData() {
		cout << "Enter Personal Details: " << endl;
		Personal::putData();
		cout << "Enter Academic Details: " << endl;
		Academic::putData();
		cout << "Enter Extra Activities Details: " << endl;
		Extra :: putData();
	}
	void getData() {
		cout << "BioData: " << endl;
		cout << "Personal Details: " << endl;
		Personal::getData();
		cout << "Academic Details: " << endl;
		Academic::getData();
		cout << "Extra Activities Details: " << endl;
		Extra :: getData();	
	}
};
int main() {
	Biodata b1;
	b1.putData();
	b1.getData();
}




