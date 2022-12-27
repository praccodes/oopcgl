#include<iostream>
using namespace std;

int main() {
	// Showing menu
	cout << "Available conversions:\n" <<"1. Rupee to Dollar\n" << "2. Rupee to Euro\n" << "3. Rupee to Yen\n"<<"4. Rupee to Franc\n"<<"Enter the no. of operation you want to perform: \n";
	int n;
	cin >> n;
	switch(n):
		n == 1 {
			cout << "Rupee: ";
			int a;
			cin >> a;
			cout << "Dollar: " << a * 0.013;
			break;
		}
		n == 2 {
			cout << "Rupee: ";
			cin >> a;
			cout << "Euro: " << a * 0.012;
			break;
		}
		n == 3 {
			cout << "Rupee: ";
			cin >> a;
			cout << "Yen: " << a * 1.71;
			break;
		}
		n == 4 {
			cout << "Rupee: ";
			cin >> a;
			cout << "Franc: " << a * 0.012;
			break;
		}
}

