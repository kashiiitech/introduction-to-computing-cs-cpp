#include<iostream>   //here we simply include the iostream library

using namespace std;  // here this is used for std::cout 

int main()
{
    cout<<"Enter Any Number : ";  //this will simply show the statement of the line
    int num;                      // here we declaire a variable whose type is int
    cin>>num;                       //here this will simply take the user input whose variable is declaired above and the type is int
    int sum1 = 0;               //here we declaire another variable whose type is int and initially in this variable value is zero
    int i ;                     //here we declaire a variable named i which is used bellow in for looop
    for(i=1;i<=num;i++){       // here this is foor looop which intialy start from zero to less than or equal to the num and than one added to the i this will continue till i is equal to the num
        if(num%i==0){           // here this is a conditional statement which will calculate the mod of num and the every value of i
            cout<<i<<endl;      // here this line will print the factors of the num
            sum1+=i;           //here in every iteration one is added to the sum1 variable till i is equal to the num and than loop will be stoped
        }
        if (sum1==num){       // here this is a conditional statement which is used when the sum1 is equal to num
            cout<<num<<" is a Perfect Square"<<endl;  // when the above if statement is True than this will be printed 
            break;                                   //here this will simply break the loop when the first time condition becomes True
        }
    }
    if(sum1!=num){                          //here this is used when the sum1 is not equal to the num
        cout<<num<<" is not a Perfect Square"<<endl;///and when above condition is True it will simply print this line 
    }



    return 0;
}