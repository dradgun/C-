/*  Program 4_2 : Use if-else statement */
#include<iostream>
using namespace std;
int main()
{
    int year,maxday;cout << "\nEnter year : ";
    cin >> year;
    if((year % 4)==0) 
    {/* Condition True  */
    cout << "In "<< year << " is leap year "; 
    maxday = 29;}else
    {/* Condition False  */
    cout << "In "<< year << " is not leap year ";
    maxday = 28;
    }
    cout << "and February has "<< maxday << " day.\n";
    return(0);
    }