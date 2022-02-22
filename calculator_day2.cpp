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
	int add(calc e,calc g){
	return e.a+g.a;
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
	calc obj1,obj2,obj3;
	obj1.setinput(30,5);
	obj2.setinput(2,9);
	cout<<"The input are"<<obj1.a<<" "<<obj1.b<<endl;
cout<<"The input are"<<obj2.a<<" "<<obj2.b<<endl;
cout<<obj3.add(obj1,obj2);
	
	
return 0;
}