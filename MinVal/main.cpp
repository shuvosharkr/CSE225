#include <iostream>
#include "stack.cpp"
using namespace std;

int main()
{
    Stack<int> s1;
    s1.push(66);
    s1.push(77);
    s1.push(99);
    s1.push(33);

    Stack<int> aux;
    while(!s1.isEmpty()){
        cout<<s1.Top()<<" ";
        aux.push(s1.Top());
        s1.pop();
    }
    while(!aux.isEmpty()){
        s1.push(aux.Top());
        aux.pop();
    }
    cout<<endl;

    int Min= s1.Top();
    while(!s1.isEmpty()){
      s1.pop();
      if(Min>s1.Top()){
        Min=s1.Top();
      }
    }
    cout<<"Min value is: ";
    cout<<Min;
    return 0;
}
