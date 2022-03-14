#include<iostream>
using namespace std;

int main(){

int a=3;
try{
	try{
		throw a;
	}
	catch(int x){
		cout<<"exception in inner try-catch block."<<endl;
		throw x;	
	}
}
catch(int y){
	cout<<"exception in outer try-catch block."<<endl;
}
}
