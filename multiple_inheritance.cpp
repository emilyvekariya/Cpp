#include<iostream>
using namespace std;

class liquid{
	public:
	int lit;
	void setl(int x){
		lit=x;
		cout<<"liter= "<<lit<<endl;
	}
};

class fuel{
	public:
	int ml;
	void setml(int y){
		ml=y;
		cout<<"ml= "<<ml<<endl;
	}
};

class petrol: public liquid, public fuel{
	public:
	void set(int x,int y){
		lit=x;
		ml=y;
	}
	void display(){
		cout<<"liter= "<<lit<<" & ml= "<<ml<<endl;
	}
};

int main(){
	petrol p;
	p.set(5,67);
	p.display();
	p.setml(600);
	p.display();
}
