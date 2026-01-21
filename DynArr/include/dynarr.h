#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template<class T>
class dynarr
{
    private:

        T *arr;
        int length;

    public:
       dynarr();
       dynarr(int);
       ~dynarr();
       void setValue(int,T);
       T getValue(int);
       void allocate(int);
};

#endif // DYNARR_H_INCLUDED

