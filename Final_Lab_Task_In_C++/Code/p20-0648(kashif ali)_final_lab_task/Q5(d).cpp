#include <iostream>  //here we simply include the iostream library

using namespace std;   //this is used for to cout print function(std::cout)

int main()
{
	int i;			//here we simply declaire a variable i whose type is int
	for (i = 1; i <= 10; i++)   //here we used i in the for loop
	{
		int s;     //here we declaire a variable s whose type is int
		for(s = 10-i; s>0; s--)   //here this variable s is used in nested for loop and is used for empty spaces
		{
			cout<<"  "; //two spaces
		}

                for(int x = 1; x <= i; x++)    //here is the third for loop which is used for to print the triangle
	       {
			cout<<" *";  // here simply this symbol will be printed as above code is iterated
	       }

		cout << endl;
	}

	return 0;
}