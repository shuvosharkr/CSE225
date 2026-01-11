#include"studentlist.h"
template<class T>
Studentlist<T>::Studentlist()
{
    length = 0;
    currentPos = -1;
}

template<class T>
bool Studentlist<T>::isEmpty()
{
    return length == 0;
}

template<class T>
bool Studentlist<T>::isFull()
{
    return length == max_item;
}

template<class T>
void Studentlist<T>::makeEmpty()
{
    length = 0;
}

template<class T>
int Studentlist<T>::lengthIs()
{
    return length;
}

template<class T>
void Studentlist<T>::insertItem(T item)
{
    data[length] = item;
    length++;
}

template<class T>
void Studentlist<T>::deleteItem(T item)
{
    int pos;
    for(int i = 0 ; i<length; i++)
    {
        if(data[i] == item)
        {
            pos = i;
            break;
        }
    }
    data[pos] = data[length-1];
    length--;
}
template<class T>
void Studentlist<T>::getNextItem(T& item)
{
    currentPos++;
    item = data[currentPos];
}

template<class T>
void Studentlist<T>::resetList()
{
    currentPos = -1;
}
template<class T>
void Studentlist<T>::retriveItem(T& item, bool& found)
{
    for(int i= 0 ; i <length; i++)
    {
        if(data[i] == item)
        {
            found = true;
            break;
        }

    }
}
