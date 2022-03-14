#include<iostream>
using namespace std;

int main(){

int n1,n2;
cout<<"enter num 1"<<endl;
cin>>n1;
cout<<"enter num 2"<<endl;
cin>>n2;

try{
	if(n1!=n2){
		float div=(float)n1/n2;
		if(div<0){
			throw 'e';
		}
		cout<<"n1/n2= "<<div<<endl;
		if(n2==0){
		throw n2;
		}
	}
	else{
		throw n2;
	}
}
catch(int x){
	cout<<"Exception: devision by zero "<<endl;
}
catch(char c){
	cout<<"less than zero division"<<endl;
}
catch(...){
	cout<<"exception unknown"<<endl;
}
return 0;
}
