#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int x, int y){
        real =x;
        img = y;
    }
    void display(){
        cout<< "real = "<<real<<endl<<"imaginary = "<<img<<endl<<endl;
    }

    friend complex operator +(complex ob1, complex ob2);
    friend complex operator -(complex ob1, complex ob2);
    friend complex operator *(complex ob1, complex ob2);
    friend complex operator /(complex ob1, complex ob2);

};

 complex operator +(complex ob1, complex ob2){
        complex temp;
        temp.real = ob1.real +ob2.real;
        temp.img = ob1.img +ob2.img;
        return temp;
    }
 complex operator -(complex ob1, complex ob2){
        complex temp;
        temp.real = ob1.real -ob2.real;
        temp.img = ob1.img -ob2.img;
        return temp;
    }
 complex operator *(complex ob1, complex ob2){
        complex temp;
        temp.real = ob1.real *ob2.real;
        temp.img = ob1.img *ob2.img;
        return temp;
    }
 complex operator /(complex ob1, complex ob2){
        complex temp;
        temp.real = ob1.real /ob2.real;
        temp.img = ob1.img /ob2.img;
        return temp;
    }

int main(){
complex c1(5,5), c2(5,5);
complex c3;
cout<<"initial value "<<endl;
c1.display();
c2.display();
c3.display();
cout<<"starting action "<<endl<<endl;
cout<<"add "<<endl;
c3 = c1 + c2;
c3.display();
cout<<"substraction "<<endl;
c3 = c1 - c2;
c3.display();
cout<<"multiplication "<<endl;
c3 = c1 * c2;
c3.display();
cout<<"division "<<endl;
c3 = c1 / c2;
c3.display();
return 0;
}
