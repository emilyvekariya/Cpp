#include<iostream>
using namespace std;

class test{
	int x;
	public:
	void read(){
		cout<<"Enter a num: ";
		cin>>x;
	}
	class even{};
	class odd{};

	void check(){
		if(x%2==0)
			throw even();
		else
			throw odd();
	}
};

int main(){
	test t;
	t.read();
	try{
		t.check();	
	}
	catch(test::even){
		cout<<"Number is even\n";
	}
	catch(test::odd){
		cout<<"Number is odd\n";
	}
	catch(...){
		cout<<"not defined\n";
	}

	cout<<"\nend of the program\n";
}
