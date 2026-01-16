#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
const int Max=20;

template<class T>
class Stack{
public:
    Stack();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void push(T);
    void pop();
    int LengthIs();
    T Top();
private:
    T data[Max];
    int top;
};

#endif // STACK_H_INCLUDED
