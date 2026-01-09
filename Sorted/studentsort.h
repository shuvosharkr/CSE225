#ifndef STUDENTSORT_H_INCLUDED
#define STUDENTSORT_H_INCLUDED
#include<iostream>
using namespace std;
class Studentsort
{
    friend bool operator==(Studentsort, Studentsort);
    friend bool operator<(Studentsort, Studentsort);
    friend bool operator>(Studentsort, Studentsort);
    friend bool operator<=(Studentsort, Studentsort);
    friend bool operator>=(Studentsort, Studentsort);
private:
    int id;
    string name;
    float cgpa;
public:
    Studentsort();
    Studentsort(int,string,float);
    void setid(int);
    void setname(string);
    void setcgpa(float);
    int getid();
    string getname();
    float getcgpa();
    void PrintStudent();
};
#endif // STUDENT_H_INCLUDED

