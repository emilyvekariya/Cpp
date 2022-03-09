#include <iostream>
using namespace std;


class base{
     public:
     int i=90;
     base(){i=10;}
     void showbase(){cout<<i<<endl;};
};


class derived:public base{
    int j=30;
    public:	
	derived(){
		j=20;
	}
	void show(){cout<<i<<" "<<j<<endl;};
};

int main(){

	derived *ptr;
	derived b;
	b.showbase();
	//ptr->showbase();

}
