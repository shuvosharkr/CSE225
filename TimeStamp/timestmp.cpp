#include "timeStmp.h"

timeStamp::timeStamp()
{
   ss=0;
   mm=0;
   hh=0;
}
timeStamp::timeStamp(int s,int m,int h)
{
    ss=s;
    mm=m;
    hh=h;
}
void timeStamp::setSecond(int s)
{
    ss=s;
}
void timeStamp::setMinute(int m)
{
    mm=m;
}
void timeStamp::setHour(int h)
{
    hh=h;
}
int timeStamp::getSecond()
{
    return ss;
}
int timeStamp::getMinute()
{
    return mm;
}
int timeStamp::getHour()
{
    return hh;
}
bool operator>(timeStamp t1,timeStamp t2)
{
    int ts1=t1.getSecond()+t1.getMinute()*60+t1.getHour()*3600;
    int ts2=t2.getSecond()+t2.getMinute()*60+t2.getHour()*3600;
    return ts1>ts2;
}
bool operator==(timeStamp t1,timeStamp t2)
{
    int ts1=t1.getSecond()+t1.getMinute()*60+t1.getHour()*3600;
    int ts2=t2.getSecond()+t2.getMinute()*60+t2.getHour()*3600;
    return ts1==ts2;
}
bool operator<(timeStamp t1,timeStamp t2)
{
    int ts1=t1.getSecond()+t1.getMinute()*60+t1.getHour()*3600;
    int ts2=t2.getSecond()+t2.getMinute()*60+t2.getHour()*3600;
    return ts1<ts2;

}


