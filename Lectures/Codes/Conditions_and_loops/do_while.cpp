#include<iostream>

using namespace std;

int main()
{
    float val = 0.13; // change value to demonstrate
    float res = val;
    
    do
    {
        cout << res <<endl;
        res += val;
    }
    while(res <= 1);

    return 0;
}