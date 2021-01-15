#include<iostream>  //here we simply include the iostream library

using namespace std;  //here this is used for (std::cout)

int main()
{
    int i,j;    //here we declaire two variables which is used for loop here i is used for number of rows and j is used for number of columns 
    for(i=1;i<11;i++){    //here this is first for loop which is used for number of rows
        for(j=1;j<=i;j++){   //here this is second(nested ) for looop which is used for number of columns
            cout<<"* ";    //and this is printed as the above code iterated
        }
        cout<<endl;    //here when the inside loop will end it will print a newline then it will go to the outside loop and again it will contnue till the triangle with 10 rows will be printed
    }

    return 0;
}