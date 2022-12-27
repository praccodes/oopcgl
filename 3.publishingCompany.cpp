#include<iostream>
#include<string>
using namespace std;
class publication{
	string title;
	float price;
	public:
	publication() {
		title  = "";
		price = 0.0f;
	}
	void putData() {
		cout << "Enter title: ";
		string a;
		cin.get();
		getline(cin, a);
		this -> title = a;
		cout << "Enter price: ";
		float b;
		cin >> b;
		if(b < 0) {
			b = 0;
		}
		this -> price = b;
	}
	void getData() {
		cout << "Title: " << this -> title << endl;
		cout << "Price: " << this -> price << endl;
	}
};
class book:public publication{
	int page_count = 0;
	public :
	void putPageCount() {
		cout << "Enter page count: ";
		cin >> page_count;
		if(page_count < 0) {
			page_count = 0;
		}
	}
	void getPageCount() {
		cout << "Page Count: " << page_count << endl;
	}
};
class tapeCassette:public publication{
	float playing_time = 0.0f;
	public :
	void putPlayingTime() {
		cout << "Enter playing time: ";
		cin >> playing_time;
		if(playing_time < 0) {
			playing_time = 0;
		}
	}
	void getPlayingTime() {
		cout << "Playing Time: " << playing_time << endl;
	}
};
int main() {
	cout << "****************PUBLICATION*******************\n";
	publication p;
	p.putData();
	cout << "****************BOOK****************\n";
	book b;
	b.putData();
	b.putPageCount();
	cout << "****************TAPECASETTE***************\n";
	tapeCassette t;
	t.putData();
	t.putPlayingTime();
	cout << "****************PUBLICATION*******************\n";
	p.getData();
	cout << "****************BOOK****************\n";
	b.getData();
	b.getPageCount();
	cout << "****************TAPECASETTE***************\n";
	t.getData();
	t.getPlayingTime();
}
	













