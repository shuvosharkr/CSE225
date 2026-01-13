#include "sortedll.h"
#include<iostream>
using namespace std;
Sorted::Sorted(){
    pos=head;
    head=NULL;
}
void Sorted::MakeEmpty(){
     node* temp=head;
     while(head!=NULL){
        head=head->next;
        delete temp;
        temp=head;
     }
     head=NULL;
}
bool Sorted::IsEmpty(){
    return (head==NULL);
}
bool Sorted::IsFull(){
    node* location;
    try{
       location= new node();
       delete location;
       return false;
    }
    catch(std::bad_alloc& exception){
       return true;
    }
}
int Sorted::LengthIs(){
    node* temp=head;
    int Count=0;
    while(temp!=NULL){
        temp=temp->next;
        Count++;
    }
    return Count;
}
void Sorted::InsertItem(int item){
    node* temp=new node();
    node* recent= new node();
    recent->info=item;
    recent->next=NULL;
    if(head==NULL || item< head->info){
        recent->next=head;
        head=recent;
    }
    else{
        temp=head;
        while(item > temp->next->info && temp->next->next!=NULL){
                temp=temp->next;
        }
        if(!(item<temp->next->info) && temp->next->next==NULL){
            recent->next=temp->next->next;
            temp->next->next=recent;
        }
        else{
        recent->next=temp->next;
        temp->next=recent;
        }
    }
}

void Sorted::status()
{
    node* temp= head;
    while (temp!=NULL) {
        cout << temp->info << "   ";
        temp = temp->next;
    }
    cout << endl;
}
void Sorted::DeleteItem(int item){
   node* temp=new node();
   node* pos=head;
   if(head==NULL){
     return;
   }
   else if(item==head->info){
      temp=head;
      head=head->next;
      delete temp;
   }
   else {
        do {
            temp = pos;
            pos = pos->next;
        } while (pos!=NULL && pos->info!=item);
        if (pos!=NULL) {
            temp->next = pos->next;
            delete pos;
        }
    }
}
void Sorted::RetrieveItem(int& item,bool& tf){
    node* temp=head;
        while(temp!=NULL){
            if(temp->info==item)
            {
                tf=true;
                break;
            }
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }

}
void Sorted::ResetList(){
       pos=head;
}
void Sorted::GetNextItem(int& item){
    item=pos->info;
    pos=pos->next;
}
void Sorted::printreverse(){
   node* ptr1=NULL;
   node* ptr2=NULL;

   while(head!=NULL){
    ptr2=head->next;
    head->next=ptr1;
    ptr1=head;
    head=ptr2;
   }
   head=ptr1;

   status();
}

