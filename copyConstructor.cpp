#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    public:

    char* name;
    int rollNo;
    int marks;

    Student (char* n , int roll, int mark)
    {
        strcpy(name, n);
        rollNo = roll;
        marks = mark;
    }
// copy  constructor............... 
    Student (Student &s)
    {
        char*ch = new char[100];
        strcpy(ch, s.name);
        name = ch;
        rollNo = s.rollNo;
        marks = s.marks;
    }

};
int main()
{

}