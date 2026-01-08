#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
int main()
{
    node *head=NULL;
    int item;
    for(int i=0; i<7; i++)
    {
        cin>>item;
        node *temp=new node();
        temp->data= item;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            node *cur=head;
            while(cur->next!=NULL)
            {
                cur=cur->next;
            }
            cur->next=temp;

        }
    }
    node *temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data;
        temp1=temp1->next;
    }

    node *tem=head;
    while(tem!=NULL)
    {
        tem=tem->next;
    }
    tem->next=Id;


}
