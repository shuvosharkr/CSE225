#include <iostream>
#include "Sorted.cpp"
#include "studentsort.h"
using namespace std;

int main()
{
   /* sorted<int> s1;
    s1.insertItem(5);
    s1.insertItem(12);
    s1.insertItem(7);
    s1.insertItem(3);
    s1.insertItem(6);
    s1.print();
    s1.deleteItem(6);
    s1.print();
    cout<<s1.lengthIs();
    cout<<endl;
    int n;
    for(int i=0;i<s1.lengthIs();i++){
    s1.getNextItem(n);
    cout<<n<<" ";
    }
    s1.resetList();
    cout<<endl;
    s1.insertItem(6);
    s1.print();
    int m=12;
    bool found=false;
    s1.retriveItem(m,found);
    if(found){
        cout<<"Its there in the ARRAY"<<endl;
    }
    else{
        cout<<"Its not there in the ARRAY"<<endl;
    }
    cout<<s1.isFull()<<" "<<s1.isEmpty();
    return 0;
*/
    int id;
    string name;
    float cgpa;
    sorted<Studentsort> so1;
    Studentsort s1;
    for(int i=0;i<3;i++){
        cin>>id>>name>>cgpa;
        s1.setid(id);
        s1.setname(name);
        s1.setcgpa(cgpa);
        so1.insertItem(s1);
    }
    Studentsort tem;
    for(int i=0;i<so1.lengthIs();i++){
       so1.getNextItem(tem);
        cout<<tem.getid()<<"\t"<<tem.getname()<<"\t"<<tem.getcgpa()<<endl;
    }

    so1.resetList();
    cout<<endl;

    cout<<"Delete "<<endl;
    int temp;
    cin>>temp;
    Studentsort stu;
    stu.setid(temp);
    so1.deleteItem(stu);

    cout<<"After Deletion"<<endl;
    for(int i=0;i<so1.lengthIs();i++){
        so1.getNextItem(s1);
        cout<<s1.getid()<<"\t"<<s1.getname()<<"\t"<<s1.getcgpa()<<endl;
    }
    so1.resetList();

    bool found1=false;
    int mx=0;
    for(int i=0;i<so1.lengthIs();i++){
        so1.getNextItem(s1);
        if(s1.getcgpa()>mx){
            mx=s1.getcgpa();
            stu=s1;
        }
    }
    cout<<stu.getid()<<"\t"<<stu.getname()<<"\t"<<stu.getcgpa()<<endl;
    so1.resetList();

    /*
    cout<<"With Retrive "<<endl;
    int temp;
    bool found=false;
    cin>>temp;
    Studentsort s20;
    s20.setid(temp);
    so1.retriveItem(s20,found);
    if(found){
       for(int i=0;i<so1.lengthIs();i++){
       so1.getNextItem(s1);
       if(s20.getcgpa()==s1.getcgpa() && s20.getname()==s1.getname() && s20.getid()==s1.getid()){
              so1.deleteItem(s20);
        }
       }
    }
    so1.resetList();*/

   /* cout<<"After Deletion"<<endl;
    for(int i=0;i<so1.lengthIs();i++){
        so1.getNextItem(s1);
        cout<<s1.getid()<<"\t"<<s1.getname()<<"\t"<<s1.getcgpa()<<endl;
    }

    so1.resetList();*/
}
