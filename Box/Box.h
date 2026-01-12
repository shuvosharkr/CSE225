#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

template <class T>
class box{
   private:
       T height;
       T width;
       T depth;

   public:
       box();
       box(T,T,T);
       T Volume();

};

#endif // BOX_H_INCLUDED
