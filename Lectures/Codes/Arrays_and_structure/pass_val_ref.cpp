#include <iostream>

using namespace std;

void fun_2(int &n) // pass by reference
{
    n += 4;
    cout << "Inside function: " << n << endl;
}

void fun_1(int n) // pass by value
{
    n += 4;
    cout << "Inside function: " << n << endl;
}

int main()
{
    int val = 4;
    fun_1(val);
    cout << "In main: " << val << endl;
    return 0;
}