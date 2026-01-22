#include<iostream>
#include "dynarr.h"

using namespace std;

template<class T>
dynarr<T>::dynarr()
{
    arr= NULL;
    length=0;
}
template<class T>
dynarr<T>::dynarr(int size)
{
    arr= new int[size];
    length=size;
}
template<class T>
dynarr<T>::~dynarr()
{
    delete []arr;
}
template<class T>
void dynarr<T>::setValue(int index,T value)
{
    arr[index]=value;
}
template<class T>
void dynarr<T>::getValue(int index)
{
    return arr[index];
}
template<class T>
void dynarr<T>::allocate(int size)
{
    T newarr= new T[size];
    for(int i=0;i<length;i++){
        newarr[i]=arr[i];
    }
    delete []arr;
    arr=newarr;
}
