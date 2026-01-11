#include "stack.h"

template<class T>
Stack<T>::Stack(){
   top=-1;
}

template<class T>
bool Stack<T>::isEmpty(){
  return (top==-1);
}

template<class T>
bool Stack<T>::isFull(){
  return (top==Max);
}

template<class T>
void Stack<T>::makeEmpty(){
  top=-1;
}

template<class T>
void Stack<T>::push(T item){
    top++;
   data[top]=item;
}

template<class T>
void Stack<T>::pop(){
   top--;
}

template<class T>
int Stack<T>::LengthIs(){
   return (top+1);
}

template<class T>
T Stack<T>::Top(){
   return data[top];
}
