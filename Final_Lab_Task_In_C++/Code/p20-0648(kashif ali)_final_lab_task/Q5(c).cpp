#include<iostream>   //here we include iostream library
using namespace std;  //here this is used for std::cout

int main()
{
   int x;    //here we declaire a variable x which is used for number of rows and whose type is int
   int y;   // here we declaire another variable which is used for number of columns and whose type is int
   int space;   // here we declaire another variable which display space in the triangle

   for(x = 10; x >= 1; x--)   // here this is the first for loop which is used for number of rows and this loop will iterate in reverse(backword ) order
   {
      //for loop to put space
      for(space = x; space < 10; space++)  // this is used for space dispalying in triangle
         cout <<"  ";         // this  is space displaying in the triangle
      //for loop for displaying star
      for(y = 1; y <= (x - 1); y++)   //this is third nested loop which is used for to print asterisks in the triangle
         cout << "* ";

      cout <<endl;    //and this will print a new line after every iteration of inner loop
   }

   return 0;
}