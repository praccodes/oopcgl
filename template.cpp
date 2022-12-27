#include<iostream>

using namespace std;

template<class T>
T add(T a, T b){
	T c = 0;
	c = a+b;
	return c;
}
int main(){
	cout<<add(4,5)<<endl;
	cout<<add(2.1,3.4)<<endl;
	return 0;
}
