#include"quetype.h"

template<class T>
QueType<T>::QueType()
{
    rear = -1;
    front = -1;
}

template<class T>
bool QueType<T>::isEmpty()
{
    return (rear == -1 && front == -1);
}

template<class T>
void QueType<T>::Enqueue(T item)
{
    if(isEmpty())
    {
        rear = 0;
        front = 0;
    }
    else
    {
        rear = (rear+1)%max_items;
    }
    data[rear] = item;
}

template<class T>
T QueType<T>::Front()
{
    return data[front];
}

template<class T>
void QueType<T>::Dequeue()
{
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front+1)%max_items;
    }
}

template<class T>
bool QueType<T>::isFull()
{
    return (front == (rear+1)%max_items);
}



