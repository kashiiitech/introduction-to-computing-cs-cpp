#include<iostream>

using namespace std;

int main()
{
    float val  = 0.13;
    float res = val;

    while (res <= 1) // multiples of 0.13 that are between 0 and 1
    {
        cout << res <<endl;
        res +=  val;
    }
    
}