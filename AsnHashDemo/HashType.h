#ifndef HASHTYPE_H
#define HASHTYPE_H

template <class ItemType>
class HashType
{
    public:
        HashType(); // size of 100
        HashType(int maxSize);
        virtual ~HashType();
        int Find(ItemType x);
        void Insert(ItemType x);
        void Delete(ItemType x);
        void Print();
        ItemType* Rehash();
    private:
        ItemType *list;
        int capacity;
};

#endif // HASHTYPE_H
