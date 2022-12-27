#include<iostream>
#include<string>
using namespace std;
class BankAccount {
	public:
	//Data Members
	string depositor_name;
	int Account_no;
	string type_of_account;
	int Account_balance;
	// Constructor
	BankAccount(string a,int b,string c = "Savings",int d = 0) {
		depositor_name = a;
		Account_no = b;
		type_of_account = c;
		Account_balance = d;
	}
	// Member Functions
	void withdraw_balance(int a) {
		Account_balance -= a;
	}
	void check_balance() {
		cout << "Balance: " << Account_balance << endl;
	}
};
class ComplexNumber {
	public:
	// Data Members
	int real_part;
	int img_part;
	// Constructor
	ComplexNumber(int a, int b) {
		real_part = a;
		img_part = b;
	}
	// Member Functions
	void add(ComplexNumber a) {
		real_part += a.real_part;
		img_part += a.img_part;
	}
	void display() {
		cout << real_part << " + i" << img_part << endl;
	}
};
class Employee {
	public :
	// Data Members
	int emp_id;
	string emp_name;
	string emp_dept;
	int emp_salary;
	// Constructor
	Employee(int a, string b, string c, int d) {
		emp_id = a;
		emp_name = b;
		emp_dept = c;
		emp_salary = d;
	}
				
	void display_information() {
		cout << "id: "<< emp_id << endl;
		cout << "Name: " << emp_name << endl;
		cout << "Department: " << emp_dept << endl;
		cout << "Salary: " << emp_salary << endl;
	}
	void delete_emp() {
		~Employee() {
			cout << " data deleted";
		}
	}
};
		
int main() {
	// Declaring BankAccount object
	BankAccount depositor1("Ram",123456,"Joint",1500);
	depositor1.withdraw_balance(500);
	depositor1.check_balance();
	
	// Declaring ComplexNumber object
	ComplexNumber a(10,5);
	ComplexNumber b(12,4);
	a.add(b);
	a.display();

	// Declaring Employee object
	Employee e1(123,"Ram Kumar","Marketing",5000);
	e1.display_information();
	e1.delete_emp();

}	
