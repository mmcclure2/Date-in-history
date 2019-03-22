#include <iostream>
#include <string>
using namespace std;
int main(void)
{
 string Days[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday",
 "Friday","Saturday"};
 int a,month,year,y,day,m,d;
// **********************************************************************
cout << "Enter a month (1-12): "; //Takes user input for their choice of a month.
 cin >> month;
cout << "Enter a day (1-31): "; //Takes user input for their choice of a day.
cin >> day;
cout << "Enter a year (1582 - Current): "; //Takes user input for their choice of a year.
cin >> year;
a = (14-month)/12;
y=year-a;
m = month+12*a-2;
d = (day+y+y/4-y/100+y/400+(31*m/12))%7; 
// **********************************************************************

 cout <<endl <<"The Date: "<<month<<"/"<<day<<"/"<<year<<" Falls on a: "<< Days[d]<<endl; //Displays the day of the week that the user's input day falls on
 return 0;
}

