#include <iostream>
#include "stack.cpp"
using namespace std;
int getmax(Stack<int> s){
    int Max=0;

    Stack<int> m;
    //cout<<s.LengthIs()<<endl;
    while(!s.isEmpty()){
        if(s.Top()>Max){
            Max=s.Top();
        }
        s.pop();
        m.push(Max);
    }
   return m.Top();

}
int secondmax(Stack<int> s){
   int Max=0;
   int sec=getmax(s);
   Stack<int> m;
   while(!s.isEmpty()){
     if(s.Top()!=sec){

        if(s.Top()>Max){
            Max=s.Top();
        }

        s.pop();
        m.push(Max);
     }
     else{
        s.pop();
        m.push(Max);
     }
   }
   cout<<m.Top()<<endl;
}
int main()
{
    Stack<int> s1;
    s1.push(13);
    s1.push(14);
    s1.push(16);
    s1.push(12);
    s1.push(7);
    cout<<getmax(s1)<<endl;
    secondmax(s1);
   /* Stack<int> aux;
    while(!s1.isEmpty()){
        cout<<s1.Top()<<" ";
        aux.push(s1.Top());
        s1.pop();
    }
    cout<<endl;
    cout<<"Inverse: "<<endl;
    while(!aux.isEmpty()){
        cout<<aux.Top()<<" ";
        s1.push(aux.Top());
        aux.pop();
    }
    cout<<endl;

    Stack<char> s2;
    string par;

    cout<<"Enter The String: "<<endl;
    cin>>par;

    for(int i=0;i<par.length();i++){
        if(par[i]==')'){
            s2.pop();
        }
        else if(par[i]=='('){
            s2.push(par[i]);
        }
    }

    if(s2.isEmpty()){
        cout<<"Stack is Balanced"<<endl;
    }
    else{
        cout<<"Stack is Not Balanced"<<endl;
    }
*/
    return 0;
}
