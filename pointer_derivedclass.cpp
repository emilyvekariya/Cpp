#include <iostream>

using namespace std;



class base1{
     protected:
     int i;

     public:
     base1(){i=10;}
     void showbase(){cout<<i<<endl;};
};


class derived:public base1{
    int j;
    public:	
	derived(){
		j=20;
	}
	void show(){cout<<i<<" "<<j<<endl;};
};


int main(){
    base1 *ptr;
    base1 b;
    derived d;
    ptr=&b;
    ptr=&d;
	ptr->showbase();
	//ptr->show();
	((derived *)ptr)->show();
    return 0;
}
