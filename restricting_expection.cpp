#include<iostream>
using namespace std;

void demo()throw(int,double,char){
	int a=2;
		if(a==1)
			throw a;
		else if(a==2)
			throw 'A';
		else if(a==3)
			throw 4.5;
}

int main(){
	try{
		demo();
	}
	catch(int n){
		cout<<"Expection caught in int\n";
	}
	catch(double n){
		cout<<"double expection caught\n";
	}
	catch(...){
		cout<<"default\n";
	}
	cout<<"end of the program\n";
}
