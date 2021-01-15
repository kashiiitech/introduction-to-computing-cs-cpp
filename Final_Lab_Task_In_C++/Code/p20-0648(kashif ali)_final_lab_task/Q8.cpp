// here this will take three numbers from the user
// and this will multiply first two numbers and than the result will be the power of the third numbers

// And this will work For both Float and Integer Values

#include<iostream>     // here we import the iostream the iostream library
#include<cmath>      // here we import the math library

using namespace std;    // this is used for std::cout


int main()
{
  float x,y,z;    // here we will declaire three variables whose type is float
  float h,k;      // here we will declaire two variables and also the type is float and these variable is used for to make our code simple and readable
  cout<<"Enter Three Numbers : "<<endl;   // here this will print the line
  cin>>x>>y>>z;                      // here this will take three numbers from the user
  h = x*y;                          // here first two numbers are x and y they are multiplied and assign into the variable h whose type is float
  k = pow(z,h);                    // here we will call the power function from the math library and give it two parameters the first parameter is the value of z which is the user's third input and h has the value of (x*y) and than h is the power of third user input number
  cout<<"Your Answer Is : "<<k<<endl;   // here the answer is assign to the variable k whose type is float and in this line we simply print the k
   
  return 0;
}