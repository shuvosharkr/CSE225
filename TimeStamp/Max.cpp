#include<iostream>
using namespace std;

template<class Rapa>
Rapa maximum(Rapa a, Rapa b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){

   cout<<maximum<int>(40,17)<<endl;
   cout<<maximum<double>(45.0,11.0)<<endl;
   cout<<maximum<char>('O','T')<<endl;
   return 0;
}
