#include<fstream>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string poem;	
	// Writing the file
	ofstream fout("Poem.txt", ios::out);
	if(!fout.is_open()) {
		cout << "Error opening the file for output\n";
	}
	cout << "Enter your data here:\n";
	while(1) {
		getline(cin,poem);
		if(poem == "End") {
			break;
		}
		fout << poem << endl;
	}
	fout.close();
	// Reading the file
	ifstream fin("Poem.txt", ios::in);
	if(!fin) {
		cout << "Error opening file for input\n";
	}
	cout << "File contents are:\n";
	while(!fin.eof()) {
		getline(fin, poem);
		cout << "\n" << poem;
	}
	fin.close();
	return 0;
		 
}
