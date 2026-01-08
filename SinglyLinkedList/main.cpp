#include <iostream>
#include "SLL.cpp"
using namespace std;

int main()
{
    int b=7;
    int &x=b;
    cout<<&b<<endl;
    cout<<&x<<endl;
    return 0;
}
