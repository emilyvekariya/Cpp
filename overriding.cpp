#include<iostream>
using namespace std;

class base
{
public:
int b=4;

//getdata method
void show()
{
cout << "b:"<<b;
}
};

class derived : public base
{
public:
int d=5;
void show(){
cout << "b: " << b<< " d:"<<d<<endl;
}
};

int main()
{
derived d1;
base b1;
base *bptr;
bptr=&b1;
cout<<"\nbase class pointer assign address of base class object\n";
bptr->b=100;
bptr->show();
bptr=&d1;
bptr->b=200;

cout<<"\nbase class pointer assign address of derived class object\n";
bptr->show();
derived *dptr;
dptr=&d1;

cout<<"\nderived class pointer assign address of derived class object\n";
dptr->d=300;
dptr->show();

//d1.show();
return 0;
}



