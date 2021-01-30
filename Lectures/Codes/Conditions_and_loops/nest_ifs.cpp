#include<iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 4;
    
    if (a > 5)
    {
        if (b > 6) 
            cout << "a is more than 5 and b is more than 6" << endl;
        else 
            cout << "a is more than 5 BUT b is not more than 6" << endl;
    }   
    else
        cout << "a is not more than 5" <<endl;

    return 0;
}