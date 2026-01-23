#include"student.h"

Student::Student()
{
    id = 0;
    name = "";
    cgpa = 0;
}

Student::Student(int i, string n, float c)
{
    id = i;
    name = n;
    cgpa = c;
}
bool operator==(Student s1, Student s2)
{
    return s1.id == s2.id;
}
void Student::setid(int i){
     id=i;
}
void Student::setname(string n){
    name=n;
}
void Student::setcgpa(float c){
    cgpa=c;
}
int Student::getid(){
    return id;
}
string Student::getname(){
    return name;
}
float Student::getcgpa(){
    return cgpa;
}
void Student::PrintStudent()
{
    cout<<id<<"\t"<<name<<"\t"<<cgpa<<endl;
}

