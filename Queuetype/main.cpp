#include <iostream>
#include"quetype.cpp"
#include<stack>
using namespace std;
void Print(QueType<int> q)
{
    QueType<int> aux;
    stack<int> s1;
    while(!q.isEmpty())
    {
        cout<<q.Front()<<" ";
        aux.Enqueue(q.Front());
        q.Dequeue();
    }
    cout<<endl;
    while(!aux.isEmpty())
    {

        q.Enqueue(aux.Front());
        s1.push(aux.Front());
        aux.Dequeue();
    }
    cout<<"Inverse: ";
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    cout<<endl;
}
void PrintBinary(int n)
{
    QueType<string> q;
    string s1,s2;
    string temp = "1";
    q.Enqueue(temp);
    for(int i=0; i<n;i++)
    {
        temp = q.Front();
        cout<<temp<<endl;
        q.Dequeue();
        s1 = temp+'0';
        q.Enqueue(s1);
        s2 =  temp+'1';
        q.Enqueue(s2);

    }
}
int main()
{
    QueType<int> q1;
    for(int i = 0 ; i <5; i++)
    {
        int n;
        cin>>n;
        q1.Enqueue(n);
    }
    Print(q1);
    PrintBinary(5);
    return 0;
}
