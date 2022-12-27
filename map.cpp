#include<bits/stdc++.h>
using namespace std;
// country's name and its capital
// Whenever you use cin >> x then you add enter so it gets added for next input then if we use getline it will first read the enter and get terminated!! So use cin.ignore() after such input so that getline will work

int main() {;
	/*int x;
	cin >> x;
	string y="";
	getline(cin, y);
	cout << y;*/
	cout << "Program for Country's name and its capital: \n";
	map<string, string> CapitalMap;
	do {
		cout << "Menu: \n1. Add new Country\n2. Display capital of a particular country\n3. Display capital of all inputted countries\n4. Total no. of inputted countries\n5. Exit\n";
		int choice;
		cout << "Enter your choice: \n";
		cin >> choice;
		cin.ignore();
		string tmp;
		string c;
		map<string,string> ::iterator it;
		switch(choice) {
			case 1:
				cout << "Enter country name: ";
				getline(cin, tmp);
				cout << "Enter capital: ";
				getline(cin, c);
				CapitalMap[tmp] = c;
				cout << "Country added successfully !!\n";
				break;
			case 2:
				cout << "Enter the country: ";
				getline(cin, tmp);
				if(CapitalMap.find(tmp) == CapitalMap.end()) {
					cout << "The data of given country has not been inputted !!\nInput it first!!!\n";
				}
				else {
					cout << "Capital of " << tmp << " : " << CapitalMap[tmp] << endl;	
				}	
				break;
			case 3:
				cout << "Displaying all the countries data: \n";
				for(auto it = CapitalMap.begin(); it != CapitalMap.end(); it++) {
					cout << it -> first << " : " << it -> second << endl;
				}
				break;
			case 4:
				cout << "Total No. of Inputted countries: " << CapitalMap.size() << endl;
				break;
			case 5:
				exit(0);
		}
	}
	while(true);
}
