//days.cpp
//demonstrates the days from the start of the date specified

#include <iostream>
using namespace std;

int main()
{
int month,day,total_days;
int days_per_month[12] = {31,28,31,30,31,30
                          31,30,31,30,31,30};
                          
cout<<"\nEnter month (1 to 12) : " //receive the input
cin>>month;
cout<<"Enter day (1 to 31): ";
cin>>day;
total_days = day;
for(int j = 0; j<month -1 ; j++)
total_days += days_per_month[j];
cout<< "Total days from start of the year are! " << total_days <<endl;
return 0;
}
