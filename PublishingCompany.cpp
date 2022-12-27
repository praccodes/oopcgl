#include<iostream>
#include<string>
using namespace std;
class Publication
{
	string title;
	float price;
	public:
	Publication() 
	{
		title = "";
		price  = 0.0f;
	}
	Publication(string title, float price)
	{
		this -> title = title;
		this -> price = price;
	}
	void getData()
	{
		cout << "Enter title: ";
		getline(cin, title);
		cout << "Enter price: ";	
		cin >> price;
	}
	void putData()
	{
		try
		{
			if(title.length()<3)
				throw title;
			cout << "Title is: " << title << endl;
		}
		catch(string t)
		{
			cout << "Error: Title below 3 characters is not allowed";
			title = "";
		}
		try
		{
			if(price <= 0.0)
				throw price;
			cout<<"Price is: " << price << endl;

		}
		catch(float p)
		{
			cout << "Error: Price not valid: " << p << endl;
			p = 0.0f;
		}
	}
};
class Book: public Publication
{
	int pages;
	public:
	Book():Publication()
	{
		pages = 0;
	}
	Book(string title, float price, int pages):Publication(title,price)
	{
		this -> pages = pages;
	}
	void getData()
	{
		Publication::getData();
		cout << "Enter no. of pages in book: ";
		cin >> pages;
	}
	void putData()
	{
		Publication::putData();
		try
		{
			if(pages <= 0)
				throw pages;
			cout << "Pages are: " << pages << endl;
		}
		catch(int p)
		{
			cout << "Error: Pages not valid: " << p << endl;
			p = 0;
		}
	}
};
class TapeCasette: public Publication
{
	float playTime;
	public:
	TapeCasette():Publication()
	{
		playTime = 0.0f;
	}
	TapeCasette(string title, float price, float playTime): Publication(title,price)
	{
		this -> playTime = playTime;
	}
	void getData()
	{
		Publication::getData();
		cout << "Enter play time of casette: ";
		cin >> playTime;
	}
	void putData()
	{
		Publication::putData();
		try
		{
			if(playTime <= 0)
				throw playTime;
			cout << "play time of casette: " << playTime << endl;
		}
		catch(float p)
		{
			cout << "Error: play time not valid: " << p << endl;
			p = 0.0f;
		}
		
	}
	
};
int main()
{
	int ch;	
	Book b;
	char c = 'Y';
	while(c == 'Y')
	{	
		cout << "Whose entry you want to do: 1.Book  2.TapeCasette: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
			cout << "-------BOOK----------\n";
			cout << "ENTER DETAILS: \n";
			cin.ignore();
			b.getData();
			cout << "DISPLAYING DETAILS: \n";
			b.putData();
			break;
			case 2:
			TapeCasette t;
			cout << "-------TAPE CASETTE----------\n";
			cout << "ENTER DETAILS: \n";
			cin.ignore();
			t.getData();
			cout << "DISPLAYING DETAILS: \n";
			t.putData();
			break;
		}
		cout << "Do you want to continue: Y/N : ";
		cin >> c;
	}
	/*Book b;
	b.getData();
	b.putData();
	TapeCasette t;
	t.getData();
	t.putData();*/
}
