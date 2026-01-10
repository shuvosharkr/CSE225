#ifndef SORTEDTYP_H
#define SORTEDTYP_H

const int maxitem=5;

template<class T>
class sortedtype{

private:
    T data[maxitem];
    int length;
    int currentposition;
public:
    sortedtype();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    void InsertItem(T);
    void DeleteItem(T);
    int lengthIs();
    void GetNextItem(T&);
    void ResetList();
    void RetriveItem(T&, bool&);
};

#endif // SORTEDTYP_H
