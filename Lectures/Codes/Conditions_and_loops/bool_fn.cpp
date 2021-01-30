#include<iostream>

using namespace std;

/*bool is_greater(int x, int y)
{
    if (x > y)
        return true; 
    else
        return false; 
}

int main()
{    
    if (is_greater(11, 2))
        cout << "x is greater than y" <<endl;
    else
        cout << "x is less than or equal to y" <<endl;

    return 0;
}*/

bool is_greater(int x,int y){
    
    if (x==0 || y ==0){
                cout<<"plz enter positive or negative numbers not equal to zerro"<<endl;
    }
    else if (x>y){
        return true;}
    else if (x<y){
        return false;
    }
    else{
        cout<<"plz enter positive or negative numbers not equal to zerro"<<endl;
    }
}

int main(){
    cout<<is_greater(2,1)<<endl;
    return 0;
}