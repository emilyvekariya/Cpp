#include<iostream>
using namespace std;
class measure{
public:
	int height;
	int length;
	int breadth;
	
	void setinput(int c,int d,int e){
	length=c;
	breadth=d;
	height=e;
	}

	int area(){
	return 2*(length*breadth+breadth*height+height*length);}
	
	int volume(){
	return length*breadth*height;
	}
};

int main(){
measure a0;
a0.setinput(10,20,30);
cout<<"Area is:"<<a0.area()<<endl;
cout<<"Volume is:"<<a0.volume()<<endl;
return 0;
}