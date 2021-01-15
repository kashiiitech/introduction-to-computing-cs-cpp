
#include<iostream> // include iostream library

using namespace std;   //this is used for to std::cout

int main()
{
    int day, month, year, days_in_febuary = 28, //here we declaire variables whose type is int
            daay;    // day of year

    cout<<("Enter date MM/DD/YYYY: ");     // Here simply it will print the statement
    scanf("%d/%d/%d", &month, &day, &year);  // Specifies how to read the input

    daay = day;

    // check for leap year
    if( (year % 4 == 0 and year % 100 != 0 ) or (year % 400 == 0) )
    {
        days_in_febuary = 28;   //this is simply number of days in febuary month
    }

    switch(month)     //here we are using switch cases which take month input from the user and check from th bellow cases
    {
        case 2:
            daay += 31;
            break;
        case 3:
            daay += 31+days_in_febuary;
            break;
        case 4:
            daay += 31+days_in_febuary+31;
            break;
        case 5:
            daay += 31+days_in_febuary+31+30;
            break;
        case 6:
            daay += 31+days_in_febuary+31+30+31;
            break;
        case 7:
            daay += 31+days_in_febuary+31+30+31+30;
            break;            
        case 8:
            day += 31+days_in_febuary+31+30+31+30+31;
            break;
        case 9:
            daay += 31+days_in_febuary+31+30+31+30+31+31;
            break;
        case 10:
            daay += 31+days_in_febuary+31+30+31+30+31+31+30;            
            break;            
        case 11:
            daay += 31+days_in_febuary+31+30+31+30+31+31+30+31;            
            break;                        
        case 12:
            daay += 31+days_in_febuary+31+30+31+30+31+31+30+31+30;            
            break;
        default:
            cout<<"enter the correct date"<<endl;                                    
    }

    cout<<"The number of the day of the :"<<daay<<endl;

    return 0; // return 0 to operating system
}
