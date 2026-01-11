#include <iostream>
#include"sortedtyp.cpp"
#include "timeStmp.h"
using namespace std;

int main()
{

   sortedtype<timeStamp> u;
   timeStamp ts;
   int n;
   cout<<"How many time stamp you want to take?"<<endl;
   cin>>n;
   int s,m,h;
   for(int i=0; i<n; i++)
   {
       cout<<"Enter second: ";
       cin>>s;
       cout<<"Enter minute: ";
       cin>>m;
       cout<<"Enter hour: ";
       cin>>h;
       ts.setSecond(s);
       ts.setMinute(m);
       ts.setHour(h);
       u.InsertItem(ts);
   }
   cout<<"Ënter the time stamp which you want to delete "<<endl;
   timeStamp ts1;
   cin>>s;
   cin>>m;
   cin>>h;
   ts1.setSecond(s);
   ts1.setMinute(m);
   ts1.setHour(h);
   u.DeleteItem(ts1);
   cout<<"After deletion "<<endl;

   u.ResetList();
   for(int i=0; i<u.lengthIs(); i++)
   {
       u.GetNextItem(ts);
       cout<<ts.getSecond()<<" "<<ts.getMinute()<<" "<<ts.getHour()<<endl;
   }

}

