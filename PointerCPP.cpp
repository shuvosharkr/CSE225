#include<iostream>
using namespace std;
int swap(int* x){
    *x=20;
}

int main(){
    int y=9;
    int x=10;
    int* P=&x;
    swap(&x);
    cout<<x<<endl;
}
