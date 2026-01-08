#include "Box.h"
template <class T>
box<T>::box(){
   height=0;
   width=0;
   depth=0;
}

template <class T>
box<T>::box(T a, T b, T c){
   height=a;
   width=b;
   depth=c;
}
template <class T>
T box<T>::Volume(){
   return height*width*depth;
}
