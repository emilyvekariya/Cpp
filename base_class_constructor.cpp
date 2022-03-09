#include <iostream>

using namespace std;



class base1{
     protected:
     int i;

     public:
     base1(int x){i=x; cout<<"base1 constructor"<<endl;cout<<i<<endl;}
     ~base1(){ cout<<"base1 distructor"<<endl;};
};

class base2{
     protected:
     int k;

     public:
     base2(int x){k=x; cout<<"base2 constructor"<<endl;cout<<k<<endl;}
     ~base2(){ cout<<"base2 distructor"<<endl;};
};


class derived:public base1, public base2{
    int j;
    public:	
	derived(int x,int y, int z): base1(y),base2(z){
		j=x;
		cout<<"constructing derived"<<endl;
	}
	~derived(){ cout<<"derived distructor"<<endl;};
	void show(){cout<<i<<" "<<j<< " "<<k<<endl;};
};


int main(){
    base1 a(39);
    base2 b(34);
    derived q1(10,12,13);
    q1.show();
    return 0;
}
