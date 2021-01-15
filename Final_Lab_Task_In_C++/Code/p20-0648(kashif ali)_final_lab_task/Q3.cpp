#include<iostream>
#include <string>

using namespace std;

int main()
{
    string k;

    cout<<"Enter Any Number : "; 
    cin>>k;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int i;
    for(i=0;i<=k.size();i++){
        if(k[i]>1){
            if(k[i]%2==0)
                sum1+=1;
        if(k[i]=='0'){
            sum3+=1;
        }
            if (k[i]%2!=0){
            sum2+=1;}
        
    }
    }
    cout<<"The number of even digits in the integer is : "<<(sum1-sum3)<<endl;
    cout<<"The number of odd digits in the number : "<<sum2<<endl;
    cout<<"The number of zeros in the integer is : "<<sum3<<endl;
    return 0;
}
