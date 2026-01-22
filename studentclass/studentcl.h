#ifndef STUDENTCL_H_INCLUDED
#define STUDENTCL_H_INCLUDED
#include<iostream>
using namespace std;

template<class T>
class studentcl{

private:
    int roll;
    string name;
    T marks;
public:
    studentcl();
    //~studentcl();
    void setmarks(T);
    T getmarks();

};

#endif // STUDENTCL_H_INCLUDED
