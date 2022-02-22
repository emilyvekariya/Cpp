#include <iostream>
#include<ctime>
#include<cmath>
using namespace std;
 
class Date
{
	public:
	int date,month,year;
	void set_date();
	void get_date();
	void set_dob();
	void findage();

};
void Date :: set_date()
{
	time_t t =time(NULL);
	tm* tptr=localtime(&t);
cout<<"the date is:"<<tptr->tm_mday<<"/"<<(tptr->tm_mon)+1<<"/"<<(tptr->tm_year)+1900<<endl;

}

void Date::get_date()
{	
	Date d2;
	time_t t =time(NULL);
	tm* tptr=localtime(&t);
	d2.date=tptr->tm_mday;
	cout<<"the date is:"<<d2.date<<endl;
	
	d2.month=(tptr->tm_mon)+1;
	cout<<"the month is:"<<d2.month<<endl;

	d2.year=(tptr->tm_year)+1900;
	cout<<"the year is:"<<d2.year<<endl;

	
}

void Date::set_dob()
{
	Date d1;
	cout<<"ent the updated date:=="<<endl;
	cin>>d1.date;
	cout<<"ent the updated month:="<<endl;
	cin>>d1.month;
	cout<<"ent the updated year:="<<endl;
	cin>>d1.year;


}
void Date::findage()
{
	Date d2,d1;
	cout<<"difference between dates:="<<d2.date-d1.date<<endl;
	cout<<"difference between months:="<<d2.month-d1.month<<endl;
	cout<<"difference between years:="<<d2.year-d1.year<<endl;

}
int main()
{
	Date ta,tb,tc,td;
	ta.set_date();
	tb.get_date();
	tc.set_dob();
	td.findage();
	return 0;

}
 
