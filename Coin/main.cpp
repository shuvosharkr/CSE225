#include <iostream>
#include "Queue.cpp"
using namespace std;

bool operator<=(QueType<int> q,QueType<int> q2){

    int sum1=0, sum2=0;
    int item,item2;
    while(!q.IsEmpty()){
        q.Dequeue(item);
        sum1=sum1+item;
    }

     while(!q2.IsEmpty()){
        q2.Dequeue(item2);
        sum2=sum2+item2;
     }

    if(sum1<=sum2){
      return true;
    }
    else{
       return false;
    }
}

int main()
{
    QueType<int> q;
    QueType<int> q2;

    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(6);

    q2.Enqueue(4);
    q2.Enqueue(5);
    q2.Enqueue(6);

    if(q2<=q){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
