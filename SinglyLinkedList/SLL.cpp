#include "SLL.h"
#include<iostream>
using namespace std;

template<class T>
Sll<T>::Sll(){
     head=NULL;
}

template<class T>
Sll<T>::~Sll(){
     node<T> *temp=head;
     while(temp->next!=NULL){
        head=head->next;
        delete temp;
        temp=head;
     }
     head=NULL;
}

template <class T>
void Sll<T>:: Addfront(T item){
     node<T> *temp=new node<T>;
     temp->data= item;
     if(head==NULL){
        temp->next=NULL;
        head=temp;
     }
     else{
     temp->next=head;
     head=temp;
     }
}

template <class T>
void Sll<T>::Addrear(T item){
     node<T> *temp=new node<T>;
     temp->data= item;
     temp->next=NULL;
     if(head==NULL){
        head=temp;
     }else{
         node<T> *cur=head;
        while(cur->next!=NULL){
           cur=cur->next;
        }
        cur->next=temp;

     }
}

template <class T>
void Sll<T>::Addmiddle(T item, T nxt){
     node<T> *temp=new node<T>;
     temp->data=nxt;
        node<T> *pos=head;
        while(pos!=NULL && pos->data!=item){
            pos=pos->next;
        }
        if(pos!=NULL){
        temp->next=pos->next;
        pos->next=temp;
        }
        else{
            cout<<"item is not there"<<endl;
        }
}

template <class T>
void Sll<T>::Deletefront(){
     if(head!=NULL){
        node<T> *temp=head;
        head=head->next;
        delete temp;
     }

}

template <class T>
void Sll<T>::Deleterear(){
     node<T> *temp=NULL;
     node<T> *pos=head;
     if(head==NULL){
        return;
     }
     else if(head->next==NULL){
        temp=head;
        head=head->next;
        delete temp;
     }
     else{
       while(pos->next->next!=NULL){
          pos=pos->next;
       }
      temp=pos->next;
      pos->next=NULL;
      delete temp;
     }
}

template <class T>
bool Sll<T>::finditem(T item){
      node<T> *pos=head;
      while(pos!=NULL){
        if(pos->data==item){
            return true;
        }
      }
      return false;
}

template <class T>
void Sll<T>::status(){
      node<T> *temp=head;
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
      }

}
