#include <iostream>
#include<ctime>
using namespace std;
 
class Time
{
	public:
	int hour,minute,second;
	void set_time();
	void get_time();
	void sleep_time();

};
void Time :: set_time()
{
	time_t now=time(0);
	char* date=ctime(&now);
	cout<<"the time is:"<<now<<endl;

	
	
}
void Time::get_time()
{
	time_t now=time(0);
	char* date=ctime(&now);
	cout<<"the time is:"<<now<<endl;

	//int sec;
	second=now;
	cout<<"seconds are:"<<second<<endl;
	
	//int min;
	minute=second/60;
	cout<<"minutes are:"<<minute<<endl;
	
	//int hour;
	hour=second/3600;
	cout<<"hours are:"<<hour<<endl;

}

void Time::sleep_time()
{
	Time t2,t3;
	cout<<"ent the hours:=="<<endl;
	cin>>t2.hour;
	cout<<"ent the minutes:="<<endl;
	cin>>t2.minute;
	cout<<"ent the seconds:="<<endl;
	cin>>t2.second;

	cout<<"ent the hours 2:=="<<endl;
	cin>>t3.hour;
	cout<<"ent the minutes 2:="<<endl;
	cin>>t3.minute;
	cout<<"ent the seconds 2:="<<endl;
	cin>>t3.second;

	cout<<"difference between hours:="<<t2.hour-t3.hour<<endl;
	cout<<"difference between minutes:="<<t2.minute-t3.minute<<endl;
	cout<<"difference between hours:="<<t2.second-t3.second<<endl;

}
int main()
{
	Time ta,tb,tc;
	ta.set_time();
	tb.get_time();
	tc.sleep_time();	
	return 0;

}
 

     
    




