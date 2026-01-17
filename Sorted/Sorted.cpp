#include "Sorted.h"
#include<iostream>
using namespace std;

template<class T>
sorted<T>::sorted(){
   length=0;
   currentposition=-1;
}

template<class T>
bool sorted<T>::isEmpty(){
     return length==0;
}
template<class T>
bool sorted<T>::isFull(){
    return length==maxitem;
}
template<class T>
void sorted<T>::makeEmpty(){
    length=0;
}
template<class T>
int sorted<T>::lengthIs(){
    return length;
}
template<class T>
void sorted<T>::resetList(){
    currentposition=-1;
}

template<class T>
void sorted<T>::insertItem(T item){

    int i,pos=0;
     for(i=0;i<length;i++){
        if(data[i]<item){
         pos++;
        }
     }
     int j;
     for(j=length;j>pos;j--){
        data[j]=data[j-1];
     }
     data[j]=item;
     length++;
}
template<class T>
void sorted<T>::deleteItem(T item){
    int pos=0;
     for(int i=0;i<length;i++){
        if(data[i]==item){
           pos = i;
           break;
        }
     }
     for(int i=pos;i<length-1;i++){
        data[i]=data[i+1];
     }
     length--;
}
template<class T>
void sorted<T>::getNextItem(T& item){
    currentposition++;
    item=data[currentposition];
}
template<class T>
void sorted<T>::retriveItem(T& item, bool& found){
    int first=0;
    int last=length-1;
    while(first<=last){
    int mid=(first+last)/2;
    if(data[mid]<item){
        first=mid+1;
    }
    else if(data[mid]>item){
        last=mid-1;
    }
    else if(data[mid]==item){
        found=true;
        break;
    }
  }
}
template<class T>
void sorted<T>::print(){
     for(int i=0;i<length;i++){
        cout<<data[i]<<" ";
     }
     cout<<endl;
}
