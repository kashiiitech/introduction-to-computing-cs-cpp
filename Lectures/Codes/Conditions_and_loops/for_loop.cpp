#include<iostream>

using namespace std;

void for_test()
{
    for(int i = 0; i < 5; i++) // i++ is the same as i+=1
    {
        cout << "i = " << i << endl;
    }
    // cout << "outside loop, i = " << i << endl; // cannot access outside the loop
}

int main()
{
    for_test();
    
    // int x = 2;
    // cout << "x = " << x << endl;
    // cout << "(postfix) x = " << x++ << endl;
    // cout << "x = " << x << endl;
    // cout << "(prefix) x = " << ++x << endl;
    
    return 0;
}