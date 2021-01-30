#include<iostream>

using namespace std;

int fun(int x)
{
    cout << "x = " << x << endl;
    return x; 
}

int main()
{
    int val;
    val = fun(1) || fun(0); 
    cout << "val = " << val << endl;
    return 0;
}