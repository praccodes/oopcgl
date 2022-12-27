#include<iostream>
#include<math.h>

using namespace std;

class Complex{
	float real;
	float im;
	public:
		Complex(){
			real = 0.0f;
			im = 0.0f;
		}
		
		Complex(float a, float b){
			real = a;
			im = b;
		}
		
		Complex operator+(Complex c){
			Complex res;
			res.real = real+c.real;
			res.im = im+c.im;
			return res;
		}
		
		Complex operator-(Complex c){
			Complex res;
			res.real = real-c.real;
			res.im = im-c.im;
			return res;
		}
		
		Complex operator*(Complex c){
			Complex res;
			res.real = (real*c.real)-(im*c.im);
			res.im = (real*c.im)+(im*c.real);
			return res;
		}
		
		Complex operator/(Complex c){
			Complex res, c1;
			c1.real = c.real;
			c1.im = (-1)*c.im;
			res.real = (real*c1.real)-(im*c1.im);
			res.im = (real*c1.im)+(im*c1.real);
			float a = abs(c1.real);
			float b = abs(c1.im);
			float x = (a*a)+(b*b);
			res.real = res.real/x;
			res.im = res.im/x;
			return res;
		}
		
		friend istream &operator>>(istream &in, Complex &c){
			cout<<"Enter real part : ";
			cin>>c.real;
			cout<<"Enter imaginary part : ";
			cin>>c.im;
		}
		
		friend ostream &operator<<(ostream &out, Complex &c){
			cout<<"Complex number is : "<<endl;
			cout<<c.real<<'+'<<c.im<<'i'<<'\n';
		}
};

int main(){
	Complex c1, c2, c3;
	cout<<"========================================================================="<<endl;
	cout<<"First complex number : "<<endl;
	cin>>c1;
	cout<<"========================================================================="<<endl;
	cout<<"========================================================================="<<endl;
	cout<<"Second complex number : "<<endl;
	cin>>c2;
	cout<<"========================================================================="<<endl;
	cout<<'\n'<<endl;
	cout<<"========================================================================="<<endl;
	cout<<"Addition"<<endl;
	c3 = c1+c2;
	cout<<c3;
	cout<<"========================================================================="<<endl;
	cout<<"Substraction"<<endl;
	c3 = c1-c2;
	cout<<c3;
	cout<<"========================================================================="<<endl;
	cout<<"Multiplication"<<endl;
	c3 = c1*c2;
	cout<<c3;
	cout<<"========================================================================="<<endl;
	cout<<"Division"<<endl;
	c3 = c1/c2;
	cout<<c3;
	return 0;
}
