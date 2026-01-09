#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    dynarr<int> d1(5);
    int sum=0;
    for(int i=0;i<5;i++){
        int input;
        cin>>input;
        d1.setValue(i,input);
    }
    for(int i=0;i<5;i++){
        cout<<d1.getValue(i)<<" ";
        d1.allocate(10);
        sum=sum+d1.getValue(i);
        }
    cout<<endl;
    cout<<"Sum Of The Elements In The Array: "<<sum<<endl;
    return 0;
}
