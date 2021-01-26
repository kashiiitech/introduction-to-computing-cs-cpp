#include<iostream>

//if we want to include declaire a string we include a string library

#include<string>

using namespace std;

int main(){

	float v = 3.6;
	cout<<"the size of character : "<<sizeof(char)<<"bytes"<<endl;
	cout<<"the size of int :"<<sizeof(int)<<"bytes"<<endl;
	cout<<"the size of short int:"<<sizeof(short int)<<"bytes"<<endl;
	cout<<"the size of long int:"<<sizeof(long int)<<"bytes"<<endl;
	cout<<"the size of signed long int:"<<sizeof(signed long int)<<"bytes"<<endl;
	cout<<"the size of unsigned long int:"<<sizeof(unsigned long int)<<"bytes"<<endl;
	cout<<"the size of float:"<<sizeof(float)<<"bytes"<<endl;
	cout<<"the size of double float:"<<sizeof(double)<<"bytes"<<endl;
	cout<<"the size of wchar_t:"<<sizeof(wchar_t)<<"bytes"<<endl;


	string mystr = "hiiii how are u";
	cout<<mystr<<endl;
	return 0;
}
