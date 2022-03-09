#include<iostream>
#include<string.h>
using namespace std;

class student{
	private:
	int marks;
	char name[20];

	public:
	int roll_no,x,z;
	char y[20];
	student(int x){
		this->marks=0;
	}
	void getdata(){
		cout<<"Enter marks, name, roll_no"<<endl;
		cin>>marks;
		cin>>name;
		cin>>roll_no;

	}
	void printdata(){
		cout<<"marks= "<<marks<<endl;
		cout<<"name= "<<name<<endl;
		cout<<"roll-no= "<<roll_no<<endl;
	}	
};

int main(){
	student d[3]={1,2,3};
	student *ptr=d;
	for(int i=0;i<3;i++){
		ptr->getdata();
		ptr++;
	}
	cout<<".....student data......"<<endl;
	ptr=d;
	for(int i=0;i<3;i++){
		ptr->printdata();
		ptr++;	
	}
}
