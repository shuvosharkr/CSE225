#include"unsortedtype.h"
template<class T>
UnsortedType<T>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}

template<class T>
bool UnsortedType<T>::isEmpty()
{
    return length == 0;
}

template<class T>
bool UnsortedType<T>::isFull()
{
    return length == max_item;
}

template<class T>
void UnsortedType<T>::makeEmpty()
{
    length = 0;
}

template<class T>
int UnsortedType<T>::lengthIs()
{
    return length;
}

template<class T>
void UnsortedType<T>::insertItem(T item)
{
    data[length] = item;
    length++;
}

template<class T>
void UnsortedType<T>::deleteItem(T item)
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
void UnsortedType<T>::getNextItem(T& item)
{
    currentPos++;
    item = data[currentPos];
}

template<class T>
void UnsortedType<T>::resetList()
{
    currentPos = -1;
}
template<class T>
void UnsortedType<T>::retriveItem(T& item, bool& found)
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
