#include<iostream>
using namespace std;
class calc{
public:
	int a;
	int b;
	
	void setinput(int c,int d){
	a=c;
	b=d;
	}
	int add(){
	return a+b;
	}
	int subtract(){
	return a-b;
	}
	int multiply(){
	return a*b;}
	int divide(){
	return a/b;
	}
};

int main(){
	calc obj1;
	obj1.setinput(30,5);
	cout<<"The input are"<<obj1.a<<" "<<obj1.b<<endl;
	cout<<"the sum is  "<<obj1.add()<<endl;
	cout<<"the subtraction is  "<<obj1.subtract()<<endl;
	cout<<"the multiply is  "<<obj1.multiply()<<endl;
	cout<<"the division is  "<<obj1.divide()<<endl;
return 0;
}