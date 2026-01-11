#ifndef SORTED_H_INCLUDED
#define SORTED_H_INCLUDED

const int maxitem=5;

template<class T>
class sorted{

private:
    T data[maxitem];
    int length;
    int currentposition;
public:
    sorted();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void insertItem(T);
    void deleteItem(T);
    int lengthIs();
    void getNextItem(T&);
    void resetList();
    void retriveItem(T&, bool&);
    void print();
};

#endif // SORTED_H_INCLUDED

