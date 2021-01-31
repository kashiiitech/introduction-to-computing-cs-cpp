#include <iostream>

using namespace std;

struct student
{
    int rollno;
    string name;
    float marks;
};


int main()
{
    student s1;
    s1.rollno = 123;
    s1.name = "Fahad Khan";
    s1.marks = 67;
    cout << "Roll No: " << s1.rollno << ", Name: " << s1.name << ", Marks: " << s1.marks <<endl;

    student s2;
    s2.rollno = 124;
    s2.name = "Wasif";
    s2.marks = 76;
    cout << "Roll No: " << s2.rollno << ", Name: " << s2.name << ", Marks: " << s2.marks <<endl;
    
    // student s[5];

    return 0;
}