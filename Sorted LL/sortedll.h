#ifndef SORTEDLL_H_INCLUDED
#define SORTEDLL_H_INCLUDED
struct node{
     int info;
     node* next;
};
class Sorted{
private:
    node* head;
    node* pos;
public:
    Sorted();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(int);
    void DeleteItem(int);
    void RetrieveItem(int& ,bool&);
    void ResetList();
    void GetNextItem(int&);
    void status();
    void printreverse();
};
#endif // SORTEDLL_H_INCLUDED
