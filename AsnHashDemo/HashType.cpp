#include "HashType.h"
#include <iostream>
using namespace std;

template <class ItemType>
HashType<ItemType>::HashType()
{
    capacity=100;
    list = new ItemType[capacity];
    for(int i=0; i<capacity; i++)
    {
        list[i]=-2;
    }
}

template <class ItemType>
HashType<ItemType>::HashType(int maxsize)
{
    capacity=maxsize;
    list = new ItemType[maxsize];
    for(int i=0; i<maxsize; i++)
    {
        list[i]=-2;
    }
}

template <class ItemType>
HashType<ItemType>::~HashType()
{
    delete[] list;
}

template <class ItemType>
int HashType<ItemType>::Find(ItemType x)
{

    int index= x%20;

    while(list[index]!=-2 || list[index]==-1)
    {
        if(list[index]==x)
        {
            return index;
            break;
        }
        index=(index+1)%20;
    }
    return -1;
}

template <class ItemType>
void HashType<ItemType>::Insert(ItemType x)
{

    int index= x%20;
    while(index<capacity)
    {
        if(list[index]==-2 || list[index]==-1)
        {
            list[index]=x;
            return;
        }
        else
        {
            index=(index+1)%20;
        }
    }
    throw("HashTable is FULL , Element can not be inserted");

}
template <class ItemType>
void HashType<ItemType>::Delete(ItemType x)
{

    int index = Find(x);
    list[index]=-1;

}

template <class ItemType>
void HashType<ItemType>::Print()
{
    for(int i=0; i<capacity; i++)
    {
        if(list[i]!=-2 && list[i]!=-1)
        {
            cout<<list[i]<<endl;
        }
    }
}

template <class ItemType>
ItemType* HashType<ItemType>::Rehash()
{
    ItemType* list2 = new ItemType[capacity];

    for(int i=0; i<capacity; i++)
    {
        list2[i]=-2;
    }

    for(int i=0; i<capacity; i++)
    {
        if(list[i]!=-2 && list[i]!=-1)
        {
            int index=list[i]%20;
            while(list2[index]!=-2)
            {
                index=(index+1)%20;
            }
            list2[i]=list[i];
        }
    }
    return list2;
}
