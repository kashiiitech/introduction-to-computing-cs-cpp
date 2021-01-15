// This is the program which takes input from the user and than tell us whether the input number is prime or not

#include<iostream>    // here we will import the iostream library

using namespace std;   // here this is used for cout function (std::cout)

int main(){

    int num;          // here we will declaire a variable named num and the type of the variable is int
    cout<<"enter your num : ";    // here this will show the line 
    cin>>num;                    // here this will take the num input from the user and it's type is int
    int i;                      // here we will declaire a variable named i and the type of the variable is int which is used bellow in for loop
    for(i=2;i<num;i++){        // here this is for loop this will start from 2 and end at the number num and in every iteration it will add 1 to the i
        if(num%i==0){          // here this is a conditional statement this will calculate the mod of num(number from the user) and i it will take the value of i from the for loop
            cout<<"it is not a prime num :";  // if the above condition become True it will print this line
            break;                           // this will break the loop if the above condition become True
        }
        else{                                // this is else condition if the if condition become False it will simply print the else condition
            cout<<"it is a prime num :";    // if else condition become True it will simply print the line
            break;                          // here if the above condition becomes True it will break the function
        }
    }

    return 0;
}