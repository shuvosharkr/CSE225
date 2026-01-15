#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};
node* head;

void InsertAtFirst(int item){
    node* temp=new node();
    temp->data= item;
    if(head==NULL){
    temp->next= NULL;
    head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void InsertAtLast(int item){
    node* temp=new node();
    temp->data= item;
    if(head==NULL){
    temp->next= NULL;
    head=temp;
    }
    else{
        node* pos=head;
       while(pos->next!=NULL){
         pos=pos->next;
       }
       temp->next=NULL;
       pos->next=temp;
    }
}
void InsertPos(int item, int n){
    if(n==1){
        InsertAtFirst(item);
    }
    else{
    node* temp=new node();
    temp->data=item;
    temp->next=NULL;
    node* pos=head;
    for(int i=1;i<n-1;i++){
        pos=pos->next;
    }
    temp->next=pos->next;
    pos->next=temp;}
}
void DeleteAtFirst(){
    node* temp=head;
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        head=NULL;
        delete temp;
    }
    else{
        head=head->next;
        delete temp;
    }
}

void DeleteAtLast(){
    node* temp=new node();
    node* pos=head;
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        head=NULL;
        delete pos;
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

void DeletePos(int n){
    node*temp=new node();
    node* pos=head;
    for(int i=1;i<n-1;i++){
        pos=pos->next;
    }
    temp=pos->next;
    pos->next=temp->next;
    delete temp;
}

void DeleteValue(int item){
    node* temp=new node;
    node* pos=head;
    if(head==NULL){
        return;
    }
    else if(head->data==item){
        temp=head;
        head=head->next;
        delete temp;
    }
    else {

        do {
            temp = pos;
            pos = pos->next;
        } while (pos!=NULL && pos->data!=item);

        if (pos!=NULL) {
                temp->next = pos->next;
                delete pos;
        }

    }

}
void print(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}

int main()
{
    head=NULL;

    cout<<"After Insertion: "<<endl;
    InsertAtFirst(50);
    //InsertAtFirst(30);
    //InsertAtFirst(20);
    //InsertAtFirst(10);

    //InsertAtLast(60);
   // InsertAtLast(70);

   // InsertPos(90,5);

    print();

    cout<<"After Deletion: "<<endl;;
    //DeletePos(2);

    //DeleteAtFirst();

    DeleteAtLast();

    //DeleteValue(60);

    print();


    return 0;
}

