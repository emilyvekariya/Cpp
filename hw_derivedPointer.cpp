#include <iostream>
using namespace std;


class base{
     public:
     int i=90;
     base(){i=10;}
     void showbase(){
	cout<<i<<endl;
	}
};


class derived:public base{
    public:
	int j;	
	derived(){
		j=20;
	}
	void show(){
		cout<<i<<" "<<j<<endl;
	}
};

int main(){
	base *ptr;
	derived d;
	ptr=&d;
	//derived b;
	//b.showbase();
	ptr->show();

}
