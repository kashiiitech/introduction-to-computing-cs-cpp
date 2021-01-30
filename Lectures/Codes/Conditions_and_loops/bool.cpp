#include<iostream>

using namespace std;

int main()
{
    bool is_greater;
    int x = 2, y = 5;

    if (x > y)
        is_greater = true; // true as 1
    else
        is_greater = false; // false as 0

    //cout << "Is x greater than y? " << is_greater <<endl;

    if (is_greater)
        cout << "x is greater than y" <<endl;
    else
        cout << "x is less than or equal to y" <<endl;
    
    return 0;
}