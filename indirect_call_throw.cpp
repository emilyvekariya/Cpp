#include<iostream>
using namespace std;

void xtest(int test){
	cout<<"inside xtest,test is: "<<test<<endl;
	if(test)throw test; //check for non-zero values
}

int main(){
	cout<<"start\n";
	try{
		cout<<"Inside the func\n";
		xtest(-1);
		xtest(0);
		xtest(1);
		xtest(2);
	}
	catch(int i){
		cout<<"caught an exception--value is: ";
		cout<<i<<endl;
	}
	cout<<"\nEND\n";
	return 0;
}
