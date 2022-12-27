#include<bits/stdc++.h>
using namespace std;

// Addition of Complex<T> number
// Multiplication of Complex<T> number
// Subtraction
// Division


template<class T>
class Complex{
	public:
	T r;
	T i;
	Complex<T>() {
		r = 0;
		i = 0;
	}
	Complex<T>(T a, T b) {
		r = a;
		i = b;
	}
	Complex<T> operator+(Complex<T> &c1) {
		Complex<T> temp;
		temp.r = r + c1.r;
		temp.i = i + c1.i;
		return temp;
	}
	void display() {
		cout << r << " + " << i << "i" << endl;
	}
	Complex<T> operator-(Complex<T> c1) {
		Complex<T> temp;
		temp.r = r - c1.r;
		temp.i = i - c1.i;
		return temp;
	}
	Complex<T> operator*(Complex<T> c1) {
		Complex<T> temp;
		temp.r = r*c1.r - i*c1.i;
		temp.i = r*c1.i + i*c1.r;
		return temp;
	}
	Complex<T> operator/(Complex<T> c1) {
		Complex<T> temp, c2;
		c2.r = c1.r;
		c2.i = (-1)*c1.i;
		T x;
		temp.r = r*c2.r - i*c2.i;
		temp.i = r*c2.i + i*c2.r;
		T a = abs(c1.r);
		T b = abs(c1.i);		
		x = a*a + b*b;
		temp.r=temp.r/x;
		temp.i = temp.i/x;
		return temp;
	}
	friend ostream &operator <<(ostream &out, Complex<T> &c)
	{	
		if(c.i < 0)
		{
			out << c.r << c.i << "i";
		}
		else 
		{ 
			out << c.r << " + " << c.i << "i";
		}
		return out;
	}
	friend istream &operator >>(istream &in, Complex<T> &c)
	{
		in >> c.r >> c.i;
		return in;
	}
};

int main() {
	Complex<double> c1, c2;
	cin >> c1 >> c2;
	Complex<double> c = c1 + c2;
	cout << c << endl;
	Complex<int> c3, c4;
	cin >> c3 >> c4;
	Complex<int> c5 = c3 + c4;
	cout << c5 << endl;
}
	









