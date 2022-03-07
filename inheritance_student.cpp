#include<iostream>
using namespace std;

class student{
	public:
	int roll_no;
	char name[50];

	void getInput(){
		cout<<"Enter your roll number: ";
		cin>>roll_no;
		cout<<"Enter your name: ";
		cin>>name;
	}
};

class classtest{
	public:
	int marks[5];
	void getmarks(){
		cout<<"Enter 5 marks"<<endl;
		for(int i=0;i<5;i++){
			cin>>marks[i];
		}
	}
};

class result: public student, public classtest{
	public:
	int total_marks=0;
	float percentage=0;
	void finalresult(){
	for(int i=0;i<5;i++){
		total_marks += marks[i];
	}
	percentage=total_marks/5;
	cout<<"Total marks of "<<name<<" is "<<total_marks<<endl;
	cout<<"percentage of "<<name<<" is "<<percentage<<"%"<<endl;
	}
};

int main(){
	result r;
	r.getInput();
	r.getmarks();
	r.finalresult();
}
