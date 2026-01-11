#include <iostream>
#include "Box.cpp"
using namespace std;

int main()
{
    box<double> b1(2.0,3.0,0.5);
    box<double> b2(4.0,6.5,0.3);
    box<double> b3(5.5,4.3,0.9);

    cout<<b1.Volume()<<endl;
    cout<<b2.Volume()<<endl;
    cout<<b3.Volume()<<endl;
    return 0;
}
