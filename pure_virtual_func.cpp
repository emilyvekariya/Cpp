#include<iostream>
using namespace std;

class shape
{
protected:
float x;
public:
//getdata method
void getdata(){cin>>x;}
virtual float calculateArea()=0;

};

class square : public shape
{
public:
float calculateArea(){
return x*x;
}
};

class circle : public shape
{
public:
float calculateArea(){
return 3.14*x*x;
}
};

int main(){

square s;
circle c;
cout<<"enter length to calculate area of square\n";
s.getdata();
cout<<s.calculateArea();
cout<<"\nenter radius to calculate area of circle\n";
c.getdata();
cout<<c.calculateArea();




}
