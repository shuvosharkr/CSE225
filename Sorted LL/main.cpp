#include <iostream>
#include "sortedll.h"
using namespace std;

int main()
{
    Sorted s1;
    s1.InsertItem(20);
    s1.InsertItem(10);
    s1.InsertItem(100);
    s1.InsertItem(200);
    s1.InsertItem(50);
    s1.InsertItem(101);
    s1.InsertItem(40);
    s1.InsertItem(202);
    s1.InsertItem(198);


    cout<<s1.LengthIs()<<endl;
    s1.status();

    s1.DeleteItem(50);

    cout<<s1.LengthIs()<<endl;
    s1.status();

    cout<<s1.IsEmpty()<<endl;
    cout<<s1.IsFull()<<endl;
    s1.MakeEmpty();
    cout<<s1.IsEmpty()<<endl;


    s1.InsertItem(6);
    s1.InsertItem(3);
    s1.InsertItem(2);
    s1.InsertItem(5);
    s1.InsertItem(1);
    s1.status();
    int item=12;
    bool tf=false;
    s1.RetrieveItem(item,tf);
    cout<<item<<" "<<endl;
    if(tf==1){
        cout<<"ITS IN THE LIST"<<endl;
    }
    else{
        cout<<"ITS NOT IN THE LIST"<<endl;
    }

    s1.DeleteItem(5);
    s1.InsertItem(12);
    s1.status();

    item=12;
    tf=false;
    s1.RetrieveItem(item,tf);
    cout<<item<<" "<<endl;
    if(tf==1){
        cout<<"ITS IN THE LIST"<<endl;
    }
    else{
        cout<<"ITS NOT IN THE LIST"<<endl;
    }

    cout<<endl;
    s1.ResetList();
    int it;
    s1.GetNextItem(it);
    cout<<it<<endl;

    s1.ResetList();
    for(int i=0;i<s1.LengthIs();i++){
        s1.GetNextItem(it);
        cout<<it<<"  ";
    }
    s1.ResetList();
    cout<<endl;

    s1.printreverse();
    return 0;
}
