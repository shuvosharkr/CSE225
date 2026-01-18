#include <iostream>
#include"studentlist.h"
#include"student.h"
using namespace std;
int main()
{
     cout<<"Enter the number of student :"<<endl;
     int n;
     int id;
     string na;
     float c;
     cin>>n;
    Student s1;
    Studentlist<Student> u1;
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
