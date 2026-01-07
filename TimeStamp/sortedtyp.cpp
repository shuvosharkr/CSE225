#include "sortedtyp.h"
#include<iostream>
using namespace std;

template<class T>
sortedtype<T>::sortedtype(){
   length=0;
   currentposition=-1;
}

template<class T>
bool sortedtype<T>::isEmpty(){
     return length==0;
}
template<class T>
bool sortedtype<T>::isFull(){
    return length==maxitem;
}
template<class T>
void sortedtype<T>::makeEmpty(){
    length=0;
}
template<class T>
int sortedtype<T>::lengthIs(){
    return length;
}
template<class T>
void sortedtype<T>::ResetList(){
    currentposition=-1;
}
template<class T>
void sortedtype<T>::InsertItem(T item){

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
void sortedtype<T>::DeleteItem(T item){
    int pos=0;
     for(int i=0;i<length;i++){
        if(data[i]==item){
           break;
        }
        else{
            pos++;
        }
     }
     for(int i=pos;i<length-1;i++){
        data[i]=data[i+1];
     }
     length--;
}
template<class T>
void sortedtype<T>::GetNextItem(T& item){
    currentposition++;
    item=data[currentposition];
}
template<class T>
void sortedtype<T>::RetriveItem(T& item, bool& found){
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
