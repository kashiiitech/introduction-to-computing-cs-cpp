// This programe will take three input numbers from the user and their forward reversed number will print out

#include<iostream>   // here we import the iostream library

using namespace std;   // here this is used for cout function(std::cout)

int main()
{
    int x,y,z;           //here we declaire three variables named(x,y,z) and the type of the variable is integer
    cout<<"enter your numbers : "<<endl;    // here this will show this line
    cin>>x>>y>>z;                            // here we will take three numbers from user input
    cout<<"your forward number is : ";      // and this will print the forward number
    cout<<x<<y<<z<<endl;                    // here this is the print out of the three forward numbers
    cout<<"your reversed number is : ";    // here this will show the reversed numbers
    cout<<z<<y<<x<<endl;                    // in this line it will print out the reversed number


    return 0;
}