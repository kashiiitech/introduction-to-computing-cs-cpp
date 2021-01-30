#include<iostream>

using namespace std;

/*int absolute(int val)
{
    if (val >= 0) // && (and), || (or)
    {
        return val;
    }
    else if (val < 0) //elif
    {
        return -val;
    }
}

int main()
{
    cout << absolute(8) << endl;
    return 0;
}*/

float absolute(float val)
{   if (val >= 0) return val;
    else return -val;   }
int main()
{   cout<<absolute(-98.9)<<endl;
    return 0;}