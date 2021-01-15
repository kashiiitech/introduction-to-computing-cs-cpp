#include<iostream>

#include<string>

using namespace std;

//here is the average function user gives input of two numbers

/*int main()
{
    //int x;
    float x;
    cin>>x;
    int y;
    cin>>y;

    float average;
    average = (x+y)/2;
    cout<<"the average of "<<x<<" and "<<y<<" is : "<<average<<endl;

    return 0;
}*/
 //write a function which takes input from the user and calculate the square root of the function

 /*int main(){
     int v;
     cout<<"enter the number :";
     cin>>v;
     int square;
     square = v*v;
     cout<<"the square of "<<v<<" is "<<square<<endl;

     return 0;
 }*/
// here is a simple programe
/* int main()
 {
     string x;
     cout<<"write your name here :";
     cin>>x;
     cout<<"Good Morning "<<x<<endl;

     return 0;
 } */

 /*int main()
 {
     int score;
     cout<<"enter your marks i will assign you the Grade :";
     cin>>score;

     if (score>=90){
         cout<<"your grade is, A"<<endl;}
    else if (score>=80){
        cout<<"your garde is, B"<<endl;
        }
    else if (score>=70){
        cout<<"your grade is,C"<<endl;
    }
    else if (score >= 60){
        cout<<"your grade is, D"<<endl;

    }

    else{
        cout<<"Sorry ! You are Fail"<<endl;
    }

     return 0;
 }*/

//this a simple fruit classifier function

/*string fruit_classifier(string shape,string color);

 int main()
 {
     cout<<fruit_classifier("curved","yellow")<<endl;
     return 0;
 }


string fruit_classifier(string shape,string color)
{
    if (shape == "round" and color == "red"){
        cout<<"the fruit is apple :"<<endl;
    }
    else if (shape == "round" and color == "orange"){
        cout<<"the fruit is orange"<<endl;
    }
    else if (shape == "curved" and color == "yellow"){
        cout<<"the fruit is banana"<<endl;
    }
    else{
        cout<<"the fruit is not declaired in above list plz declaire first"<<endl;
    }
}*/


#include<iostream>
#include<cmath>

using namespace std;

/*int main()
{
    int length;
    cout<<"enter the length :";
    cin>>length;
    int width;
    cout<<"enter the width :";
    cin>>width;
    int rectangle;
    rectangle = length * width;
    cout<<"the area of the rectangle is "<<rectangle<<endl;


    return 0;
}*/

/*int main()
{
    int radius;
    cout<<"enter the radius :";
    cin>>radius;
    float circumference;
    circumference = 2*M_PI*radius;
    cout<<"the circumference of circle is :"<<circumference<<endl;


    return 0;
}*/

/*Write a C+ program that ask the user to input the radius of a circle and 
ask the find whether to calculate the diameter, circumference and area of a circle. (
    //do this task using if else-if else statement)*/

/*int main()
{
    int radius;
    cout<<"enter the radius :";
    cin>>radius;
    
    cout<<"1.diameter\n2.circumference\n3.area of circle"<<endl;
    string selection;
    cout<<"what do you want to calculate : ";
    cin>>selection;
    if (selection=="1"){
        cout<<"the diameter is : "<< 2 * radius<<endl;
    }
    else if (selection == "2"){
        cout<<"the circumference of the circle id : "<<2*M_PI*radius<<endl;
    }
    else if (selection == "3"){
        cout<<"the area of the circle is : "<<M_PI*(radius*radius)<<endl;
    }




    return 0;
}*/


/*Write a C++ program that as the user to enter the quantity in pounds. 
Your program will display a menu like press 1 to convert pounds in gram. 
Press 2 to convert pounds in kilogram, 
on the basis of input calculate and print the result accordingly (do this task using Switch statement) 
       1 Pounds = 0.454 kilograms
       1 Pound = 453.59237 Grams
*/
/*int main()
{
    int quantity;
    cout<<"enter the quantity :";
    cin>>quantity;
    cout<<"--press 1 to convert pounds in grams. \n--press 2 to convert pounds in kilograms."<<endl;
    string selection;
    cout<<"select in which do you want to convert ";
    cin>>selection;
    if (selection == "1")
    {
        cout<<quantity<<" pounds"<<" is equal to "<<quantity*453.59237<<" Grams"<<endl;
    }
    else if (selection == "2")
    {
        cout<<quantity<<" pounds"<<" is equal to "<<quantity*0.454<<" kilograms"<<endl;
    }
    return 0;
}*/



/*int main()
{   int pound;
    cout<<"write ";
    cin>>pound;

    switch(pound){
    case 1:
    cout<<"in grams "<<pound*453.59237<<endl;
        break;
    case 2:
    cout<<"in kilogrames "<<pound*0.454<<endl;
        break;
    default:
    cout<<"No case matched"<<endl;
    
    }

    return 0;
}*/

//Write a C++ program will print the even number from 0 to 50 using for loop

/*int main()
{
    for (int i = 0; i <= 50; i += 1){
           cout<<i<<endl;
    }
 
    
    return 0;
}*/

/*int main()
{
    while (true){
    int radius;
    cout<<"enter the radius :"<<endl;
    cin>>radius;
    cout<<"1.diameter\n2.circumference\n3.area"<<endl;
    string select;
    cout<<"plzzzz select"<<endl;
    cin>>select;
    if (select = "1")
    {
        cout<<"the diameter is : "<<radius*2<<endl;
    }
    /*cout<<"do you want again [y/n]"<<endl;
    string input;
    cin>>input;
    if (input="y"){
        continue;
    }
    else{
        break;
    }
    }
*/
    //return 0;
int main()
{   
    while(true){
        int radius;
        cout<<"enter the radius : ";
        cin>>radius;
        cout<<"1.diameter\n2.circumference\n3.area of circle"<<endl;
        string select;
        cout<<"select what do you want to measure : ";
        cin>>select;
        if (select == "1"){
            cout<<"the diameter is : "<<radius*2<<endl;
        }
        else if (select == "2"){
            cout<<"the circumference is : "<<2*M_PI*radius<<endl;
        }
        else if (select == "3"){
            cout<<"the area of the circle is : "<<M_PI*radius*radius<<endl;
        }
    cout<<"do you want to calculate again [yes/no] ";
    string again;
    cin>>again;
    if (again=="yes"){
        continue;
        
    }
    else if (again == "no"){
        break;
    }
    
    }
    
    return 0;
}