#include<iostream>
using namespace std;

int main(){
	int *p1,*p2,*sum,i;
	
	p1=new int;
	p2=new int;
	sum=&i;
	cout<<"Enter first number: ";
	cin>>*p1;
	cout<<"Enter second number: ";
	cin>>*p2;
	*sum=*p1+*p2;
	cout<<"sum of a pointer variable: "<<*sum;

	delete p1;
	delete p2;
	return 0;
}
