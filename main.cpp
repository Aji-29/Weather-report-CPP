#include <iostream>
#include <string>
using namespace std;
int main()
{
 string location, address, name;
 int option;

cout<<"\n.....WEATHER APP....";
cout<<"\n*** this app creator details ***";
cout<<"\nNAME:AJITHA.K";
cout<<"\nCOLLEGE NAME: VIVEKANANDHA COLLEGE OF ENGINEERING FOR WOMEN ";
cout<<"\nEnter your name :";
cin>>name;
cout<<"\nEnter your email address :";
cin>>address;
cout<<"\nEnter your location :";
cin>>location;
cout<<"\nWEATHER REPORT...!! "<<endl;
cout<<"\n1.Today weather report : "<<endl;;
cout<<"\n2.Yesterday weather report :"<<endl;;
cout<<"\n3.Tomorrow weather report :"<<endl;
cout<<"\n4.Weak wise report :"<<endl;
cout<<"\nEnter your option:";
cin>>option;
switch(option) 
{
 case 1:
 cout<<"\nToday weather is cloudy 28°C    ,Humidity 85% , pressure 1007mbar , 85% chance for rain ";
 break;
 case 2: 
 cout<<"\nYesterday was sunny climate 32°C    ,Humidity  75% , pressure 1327mbar , 50% chance for rain ";
 break;
 case 3:
 cout<<"\nTomorrow sun rise at 6:30 am...afternoon will be a chance for rain...evening will be chance for cloudy climate";
 break;
 case 4:
 cout<<"\nWeek wise report :\n 1.Monday-cloudy climate \n 2.Tuesday-Sunny climate  \n 3.wednesday-Rainy Climate \n 4.Thursday-thunderstorm\n 5.Friday - Heavy rain\n 6.Saturday-partially cloud \n 7.sunday-Dry climate";
 break;
}
return 0;
}
 