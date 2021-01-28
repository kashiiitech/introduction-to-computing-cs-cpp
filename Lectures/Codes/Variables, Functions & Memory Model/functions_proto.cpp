#include<iostream>

using namespace std;

int square(int num); // function prototype

int main()
{
    int x = 5; 
    cout << square(x) << endl;
    return 0;
}

int square(int num)
{
    return num * num; 
}
