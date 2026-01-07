#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
const int max_items = 20;
class EmptyQue
{

};
class FullQue
{

};

template<class T>
class QueType
{
private:
    T data[max_items];
    int rear;
    int front;
public:
    QueType();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void Enqueue(T);
    void Dequeue();
    T Front();
};
#endif // QUETYPE_H_INCLUDED

