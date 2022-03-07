#include<iostream>
using namespace std;

class person{
	public:
	int age,id;
	char name[50];
	void talk(){
		cout<<"talking"<<endl;}
	void walk(){
		cout<<"talking"<<endl;}
	void work(){
		cout<<"talking"<<endl;}
	void set(int x,int y){
		age=x;
		id=y;
	}
	void setname(){
		cout<<"Enter name"<<endl;
		cin>>name;
	}
	void display(){
		cout<<"age= "<<age<<" & id= "<<id<<endl;
		cout<<"name= "<<name<<endl;
	}
};

class doctor: public person{
	public:
	void doc(){
		cout<<"this is doctor class"<<endl;
	}
};

class assistant: public doctor{
	public:
	void ass(){
		cout<<"inside assistant ";
		talk();
	}
};

int main(){
	assistant t1;
	t1.doc();
	t1.walk();
	t1.set(39,3);
	t1.setname();
	t1.display();
	t1.ass();
}

/*
class person{
	public:
		int a1=10;
		void fun1(){
			cout<<"inside public"<<endl;
		}
	protected:
		int a2=11;
		void fun2(){
			cout<<"inside protected"<<endl;
		}
	private:
		int a3=12;
		void fun3(){
			cout<<"inside private"<<endl;
		}
};

class doctor: protected person{
	public:
	void doc(){
		cout<<"variable in protected= "<<a2<<endl;
		fun2();
	}
};

class assistant: public doctor{
	public:
	void ass(){
		fun2();
	}
};

int main(){
	doctor d1;
	d1.doc();
	assistant t1;
	t1.ass();
	t1.doc();
}
*/
