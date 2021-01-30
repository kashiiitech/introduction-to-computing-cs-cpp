#include<iostream>

using namespace std;

int main()
{
    int marks = 82;
    char grade;

    if (marks < 50)
        grade = 'F';
    else
        grade = 'P';

    // grade = (marks < 50) ? 'F' : 'P'; // conditinal statement, ternary operator

    cout<< "Your grade: " << grade << endl;
    
    return 0;
}