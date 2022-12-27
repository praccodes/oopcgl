#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int cc=0;
	int wc=0;
	int lc=0;
	string data;
	fstream fin("intro.txt");
	while(fin){
		getline(fin,data);
		lc++;
		for(int i=0; i<sizeof(data);i++){
			cc++;
			if(data[i]==' '){
				wc++;
				cc--;
			}
		}
	}
	cout<<"Characters : "<<cc;
	cout<<"\nWords : "<<wc;
	cout<<"\nLines : "<<lc;
	cout<<'\n'<<endl;
}
