//  which get char data as input and then tell whether the given character
//  is a vowel or consonant.

// and this will work for both Capital and Small characters

#include<iostream>  // here we will include the library iostream

using namespace std;  // here this is used for std::cout


int main()
{ char character;          //here we declaire a variable named character and whose type is char
  cout<<"enter the chracter : ";   // here this will show this message 
  cin>>character;           // here this will take input from the user and whose type is character

  switch (character)    // here we will use switch function to check the characters 
  {
  case 'a': case 'A':     // here this is case in this case and it will match when user give input A or a
  case 'e': case 'E':     // here this is case in this case and it will match when user give input E or e
  case 'i': case 'I':     // here this is case in this case and it will match when user give input I or i
  case 'o': case 'O':     // here this is case in this case and it will match when user give input O or o
  case 'u': case 'U':     // here this is case in this case and it will match when user give input U or u
  cout<<"it is a vowel "<<endl; // If the input of the user is matched in above of the any case than this will print this line
    break;                  // and here this will break the programe if any of the above condition  is satisifies

  default:                  //here this is default this is used when the input of the user is not satisfied any of the above case than the default condition is used
  cout<<"it is not a vowel but it is a consonant "<<endl;  // here this will print this line if the cases are not matched
  }

return 0;

}