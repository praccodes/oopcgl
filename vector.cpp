#include<bits/stdc++.h>
using namespace std;

class Person {
	string name, dob, tel_no;
	public:
	Person(string a, string b, string c) {
		name = a;
		dob = b;
		tel_no = c;
	}
	void display() {
		cout << name << endl;
		cout << dob << endl;
		cout << tel_no << endl;
	}
	string getName() {
		return name;
	}
};

bool comparator(Person lhs, Person rhs) {
	return lhs.getName() < rhs.getName();
}
	

int main() {
	vector<Person> v;
	string name, dob, tel_no;
	int choice;
	char ch;
		cout << "Menu: \n";
		cout << "1. Add new Entry \n";
		cout << "2. Display the record \n";
		cout << "3. Sort the record based on name \n";
		cout << "4. Search particular record \n";
		cout << "5. Exit \n";
	do {		
		cout << "Enter choice: ";	
		cin >> choice;
		switch(choice) {
			case 1:
				cout << "Enter name: ";
				cin >> name;
				cout << "Enter Date of Birth: ";
				cin >> dob;
				cout << "Enter Telephone No.: ";
				cin >> tel_no;
				v.push_back(Person(name, dob, tel_no));
				break;
			case 2:
				for(auto i:v) {
					i.display();
				}
				break;
			case 3:
				sort(v.begin(), v.end(), comparator);
				break;
			case 4:
				cout << "Enter name: ";
				cin >> name;
				if(binary_search(v.begin(),v.end(),Person(name,"",""),comparator)) {
					cout << "Person exists " << endl;;
				}
				else {
					cout << "Person do not exits " << endl;
				}
				break;
			case 5:
				exit(0);
		}
		cout << "Do you want to continue: (y/n)  ";
		cin >> ch;
	}
	while(ch == 'y');
}
		
				













	
	
