#include<iostream>

using namespace std;

void check_char()
{
    char ch = ' '; // character datatype, stores a single character (ASCII, Unicode)
    // any character can be stored here, demonstrate
    cout << "Size of char (in bytes)" << sizeof(ch) << endl;
    cout << "In character, ch = " << ch << endl;
    cout << "In integer, ch = " << (int) ch <<endl;
    //cout << "Next character in table: "<< (char)(ch + 1) <<endl;
}

int main()
{
    check_char();
    return 0;
}