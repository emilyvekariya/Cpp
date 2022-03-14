#include<iostream>
using namespace std;

int main(){

int a=3;
	try{
		if(a==1)
			throw a;
		else if(a==2)
			throw 'A';
		else if(a==3)
			throw 4.5;	
	}

	catch(int x){
	cout<<"Exception int"<<endl;
	}
	catch(char c){
		cout<<"Exception char"<<endl;
	}
	catch(double f){
		cout<<"exception float"<<endl;
	}
return 0;
}
