#include<iostream>

using namespace std;

int main()
{
    int x; // C/C++ is statically typed languages
    x = 5;
    float  y = 8.2; 
    // int x = 2; // instead of the above two lines
    //x = "Hello"; // Cannot do this
    //cout << "value of x is " << x << endl;
    //x = 3.5;
    //cout << "value of x (after change) is  " << x <<endl;
    printf("x is %d and y is %.0f\n", x, y); //Another way of printing

    // float y = 4.5;
    // cout << "value of y is " << y <<endl;
    // printf("value of y is %.1f\n", y);
    return 0;
}