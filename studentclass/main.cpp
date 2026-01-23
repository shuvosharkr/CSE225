#include <iostream>
#include "studentcl.cpp"

using namespace std;

int main()
{
    studentcl<float> s1;

    s1.setmarks(87.5);
    s1.setmarks(92.3);

    cout<<s1.getmarks()<<endl;

    return 0;
}
