#ifndef STUDENTLIST_H_INCLUDED
#define STUDENTLIST_H_INCLUDED
const int max_item = 5;
template<class T>
class Studentlist
{
private:
    T data[max_item];
    int length;
    int currentPos;
public:
    Studentlist();
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

