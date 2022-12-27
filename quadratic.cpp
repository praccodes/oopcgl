#include<iostream>
#include<cmath>

using namespace std;

class Quadratic{
	float c2, c1, c;
	
	public:
		
		Quadratic(){
			c2=0.0f;
			c1=0.0f;
			c=0.0f;
		}
		
		Quadratic(float a, float b, float d){
			c2=a;
			c1=b;
			c=d;
		}
		
		Quadratic operator +(Quadratic q){
			Quadratic res;
			res.c2 = c2+q.c2;
			res.c1 = c1+q.c1;
			res.c = c+q.c;
			return res;
		}
		
		float eval(float x){
			float d2, d1, res;
			d2 = c2*x*x;
			d1 = c1*x;
			res = d2+d1+c;
			return res;
		}
		
		friend istream &operator >>(istream &in, Quadratic &q){
			cout<<"Coefficient of second degree term : ";
			cin>>q.c2;
			cout<<"Coefficient of first degree term : ";
			cin>>q.c1;
			cout<<"Constant term : ";
			cin>>q.c;
		}
		
		friend ostream &operator <<(ostream &out, Quadratic &q){
			cout<<"Ther quadratic equation is : "<<endl;
			if((q.c1>=0)&&(q.c>=0)){
				cout<<q.c2<<"x2+"<<q.c1<<"x+"<<q.c<<'\n';
			}
			else if (q.c1<0){
				cout<<q.c2<<"x2"<<q.c1<<"x+"<<q.c<<'\n';
			}
			else if (q.c<0){
				cout<<q.c2<<"x2+"<<q.c1<<'x'<<q.c<<'\n';
			}
			else{
				cout<<q.c2<<"x2"<<q.c1<<'x'<<q.c<<'\n';
			}
		}
		
		void compute(){
			float x1, x2;
			float d;
			d = ((c1*c1)-(4*c2*c));
			if(d<0){
				cout<<"No real roots"<<endl;
			}
			else{
				x1 = (((-1)*c1)+(sqrt(d)))/(2*c2);
				x2 = (((-1)*c1)-(sqrt(d)))/(2*c2);
				cout<<x1<<" and "<<x2<<'\n';
			}
			
		}
};

int main(){
	Quadratic q1, q2, q3;
	float x, y;
	cout<<"========================================================================"<<endl;
	cout<<"First quadratic equation : "<<endl;
	cin>>q1;
	cout<<q1;
	cout<<"========================================================================"<<endl;
	cout<<"Second quadratic equation : "<<endl;
	cin>>q2;
	cout<<q2;
	cout<<"========================================================================"<<endl;
	q3 = q1+q2;
	cout<<"========================================================================"<<endl;
	cout<<"The result of addition of the two equations is : "<<endl;
	cout<<q3;
	cout<<"The roots of the equation are : "<<endl;
	q3.compute();
	cout<<"========================================================================"<<endl;
	cout<<"Enter the value of x : ";
	cin>>x;
	cout<<"The value of the equation "<<q3<<" for x = "<<x<<" is : ";
	y = q3.eval(x);
	cout<<y<<endl;
}
