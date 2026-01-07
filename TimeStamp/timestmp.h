
#ifndef TIMESTMP_H
#define TIMESTMP_H


class timeStamp
{

    friend bool operator==(timeStamp,timeStamp);
    friend bool operator>(timeStamp,timeStamp);
    friend bool operator<(timeStamp,timeStamp);
    public:
        timeStamp();
        timeStamp(int,int,int);
        void setSecond(int);
        void setMinute(int);
        void setHour(int);
        int getSecond();
        int getMinute();
        int getHour();

    private:
        int ss;
        int mm;
        int hh;

};

#endif // TIMESTMP_H
