#include<iostream>
using namespace std;

class car{
	public:
	int m;
	void setm(int x){
		m=x;
		cout<<"mileage= "<<m<<endl;
	}
};

class fuelcar: public car{
	public:
	int cost;
	void setc(int y){
		cost=y;
		cout<<"cost= "<<cost<<endl;
	}
};

class electricCar: public car{
	public:
	int charge_hr;
	void seth(int y){
		charge_hr=y;
		cout<<"charging hours= "<<charge_hr<<endl;
	}
};

class hybridCar: public electricCar, public fuelcar{
	public:
	void set(int x,int y){
		cost=x;
		charge_hr=y;
	}
	void display(){
		cout<<"cost= "<<cost<<" & chargeing hours= "<<charge_hr<<endl;
	}
};

int main(){
	hybridCar h1;
	h1.seth(10);
	//h1.setm(15); //ambiguous
}

