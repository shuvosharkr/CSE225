#include <iostream>

using namespace std;
struct node{
    node* prev;
    int info;
    node* next;
};
node* head;
node* tail;
void InsertAtFirst(int item){
    node* temp=new node();
    temp->info=item;
    if(head==NULL){
        temp->next=NULL;
        temp->prev=NULL;
        head=tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        head=temp;
    }
}
void InsertAtLast(int item){
      node* temp=new node();
      temp->info=item;
      if(tail==NULL){
        temp->next=NULL;
        temp->prev=NULL;
        head=tail=temp;
      }
      else{
        temp->next=NULL;
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
      }
}
void InsertPosition(int item,int pos){
    node* temp=new node();
    temp->info=item;
    node* cur=head;
    for(int i=1;i<pos-1;i++){
        cur=cur->next;
    }
    temp->next=cur->next;
    temp->prev=cur;
    cur->next=temp;
    cur->next->prev=temp;

}
void print(){
     node* temp=head;
     while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
void DeleteFirst(){
    node* temp=new node();
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        temp=head;
        head=tail=NULL;
       delete temp;
    }
    else{
        temp=head;
        head->next->prev=NULL;
        head=head->next;
        delete temp;
    }
}
void DeleteLast(){
    node* temp=tail;
    if(tail==NULL){
        return;
    }
    else if(tail->prev==NULL){
        head=tail=NULL;
        delete temp;
    }
    else{
        tail->prev->next=NULL;
        tail=tail->prev;
        delete temp;
    }
}
void DeletePosition(int pos){
    node* temp=new node();
    node* cur=head;
    for(int i=1;i<pos-1;i++){
        cur=cur->next;
    }
    if(cur==head) DeleteFirst();
    else if(cur==tail) DeleteLast();
    else{
    temp=cur->next;
    cur->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
    }
}
void DeleteItem(int item){
    node* pos = head;
    while (pos != NULL && pos->info != item) {
        pos = pos->next;
    }
    if (pos==NULL) return;

    if (pos==head) DeleteFirst();
    else if (pos==tail) DeleteLast();
    else {
        pos->prev->next = pos->next;
        pos->next->prev = pos->prev;
        delete pos;
    }

}
void printReverse(){
     node* ptr1=head;
     node* ptr2=head->next;

     ptr1->next=ptr1->prev;
     ptr1->prev=ptr2;

     while(ptr2!=NULL){
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
     }
     head=ptr1;

     node* temp=head;
     while(temp!=NULL){
        cout<<temp->info<<" ";
        temp=temp->next;
     }
     cout<<endl;
}
int main()
{
    InsertAtFirst(4);
    InsertAtFirst(7);
    InsertAtFirst(5);

    InsertAtLast(2);
    InsertAtLast(6);
    InsertAtFirst(1);
    InsertPosition(3,4);
    print();
    DeletePosition(3);
    DeleteFirst();
    DeleteLast();
    DeleteItem(5);
    print();
    printReverse();
    return 0;
}
