#include<iostream>
using namespace std;

class base
{
public:
//getdata method
virtual void show()
{
cout << "base\n";
}
};

class derived1 : public base
{
public:
void show(){
cout << "derived1\n"<<endl;
}
};

class derived2 : public base
{
public:
void show(){
cout << "derived2\n"<<endl;
}
};

int main(){

derived1 d1;
derived2 d2;
base *ptr;
ptr=&d1;
ptr->show();
ptr=&d2;
ptr->show();


}
