#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
const int max_item = 5;
template<class T>
class UnsortedType
{
private:
    T data[max_item];
    int length;
    int currentPos;
public:
    UnsortedType();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void insertItem(T);
    void deleteItem(T);
    int lengthIs();
    void getNextItem(T&);
    void resetList();
    void retriveItem(T&, bool&);
};
#endif // UNSORTEDTYPE_H_INCLUDED
