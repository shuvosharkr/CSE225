#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
template<class T>
struct node{
   int data;
   node* next;
};

template<class T>
class Sll{
private:
    node<T> *head;
public:
    Sll();
    ~Sll();

    void Addfront(T item);
    void Addrear(T item);
    void Addmiddle(T item,T item2);

    bool finditem(T item);

    void Deletefront();
    void Deleterear();
    void Deletemiddle(T item);

    void status();
};
#endif // SLL_H_INCLUDED
