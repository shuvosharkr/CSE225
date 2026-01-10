#include<iostream>
using namespace std;

void realChange(int* x){
*x= 3;
}

int main(){

int x= 3;
int y= 4;

int* r;
int* p;

r=&x;
p=&y;

realChange(&x);

cout<<p<<endl<<*p<<endl<<&y<<endl<<r;
}
