#include"studentsort.h"

Studentsort::Studentsort()
{
    id = 0;
    name = "";
    cgpa = 0;
}

Studentsort::Studentsort(int i, string n, float c)
{
    id = i;
    name = n;
    cgpa = c;
}
bool operator==(Studentsort s1, Studentsort s2)
{
    return s1.id == s2.id;
}
bool operator<(Studentsort s1, Studentsort s2)
{
    return s1.id<s2.id;
}
bool operator>(Studentsort s1, Studentsort s2)
{
    return s1.id>s2.id;
}
bool operator<=(Studentsort s1, Studentsort s2)
{
    return s1.id<=s2.id;
}
bool operator>=(Studentsort s1, Studentsort s2)
{
    return s1.id>=s2.id;
}
void Studentsort::setid(int i){
     id=i;
}
void Studentsort::setname(string n){
    name=n;
}
void Studentsort::setcgpa(float c){
    cgpa=c;
}
int Studentsort::getid(){
    return id;
}
string Studentsort::getname(){
    return name;
}
float Studentsort::getcgpa(){
    return cgpa;
}


