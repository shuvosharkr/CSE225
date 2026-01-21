#include <iostream>
#include"unsortedtype.cpp"
#include"student.h"
using namespace std;
void CheckEmpty(UnsortedType<int> u)
{
    if(u.isEmpty())
    {
        cout<<"List is Empty"<<endl;
    }
    else
    {
        cout<<"NOT EMPTY"<<endl;
    }
}
void CheckFull(UnsortedType<int> u)
{
    if(u.isFull())
    {
        cout<<"LIST IS FULL"<<endl;
    }
    else
    {
        cout<<"List is not full yet"<<endl;
    }
}
void PRINT(UnsortedType<int> u3)
{
    int temp;
    for(int i= 0 ; i <u3.lengthIs();i++)
    {
        u3.getNextItem(temp);
        cout<<temp<<" ";
    }
    cout<<endl;
    u3.resetList();
}
int main()
{
//    UnsortedType<int> u1;
//    CheckEmpty(u1);
//    u1.insertItem(5);
//    u1.insertItem(15);
//    u1.insertItem(25);
//    u1.insertItem(55);
//    CheckFull(u1);
//    PRINT(u1);
//    u1.deleteItem(15);
//    PRINT(u1);
//    int temp = 75;
//    bool found = false;
//    u1.retriveItem(temp,found);
//    if(found)
//        cout<<temp<<" is in the list"<<endl;
//    else
//        cout<<"Item not Found"<<endl;
     cout<<"Enter the number of student :"<<endl;
     int n;
     int id;
     string na;
     float c;
     cin>>n;
    Student s1;
    UnsortedType<Student> u1;
    for(int i=0;i<n;i++){
        cout<<"Enter the id:"<<endl;
        cin>>id;
        s1.setid(id);
        cout<<"Enter the name:"<<endl;
        cin>>na;
        s1.setname(na);
        cout<<"Enter the cgpa:"<<endl;
        cin>>c;
        s1.setcgpa(c);
        u1.insertItem(s1);
    }
    Student temp;
    for(int i= 0 ; i<u1.lengthIs();i++)
    {
        u1.getNextItem(temp);
        temp.PrintStudent();
    }
    //u1.resetList();
    //u1.deleteItem(s1);

   // for(int i= 0 ; i<u1.lengthIs();i++)
   // {
    //    u1.getNextItem(temp);
    //    temp.PrintStudent();
   // }


    return 0;
}
