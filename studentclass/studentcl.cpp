#include"studentcl.h"
#include<iostream>
using namespace std;

template<class T>
studentcl<T>::studentcl()
{
    roll=0;
    name="";
    marks=0;
}

/*template<class T>
studentcl<T>::~studentcl()
{

}*/

template<class T>
void studentcl<T>::setmarks(T ma)
{
    marks=ma;
}

template<class T>
T studentcl<T>::getmarks()
{
    return marks;
}
