#include<iostream>   //here we simply include the iostream library

using namespace std;  // this is used for std::cout

int main(){ 
    int i,j;    //here we declaire two variable named i and j which are used in the bellow loops and the type of the variable is int
    for(i=1;i<=10;i++){    //here this loop is used for number of rows
        for(j=10;j>=i;j--){   //and this loop is used for number of columns
            cout<<"* ";      // and this will be printed according to the above foor loop iterations
        }
        cout<<endl;     //and when the nested for loop will end it will print a newline it will continue till the condition becomes False
    }

    return 0;
}