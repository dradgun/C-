#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch;
    cout << "\nEnter a character : ";
    cin >> ch;
    cout << endl;
    if(ch >= '0'&& ch <= '9')
       printf("yes numbers"); 
    else if(ch >= '10'&& ch <='100')
       printf("yes numbers");
    else if(ch >= 'A'&& ch <= 'Z')
       printf("not numbers");
    else if(ch >= 'a'&& ch <= 'z')
        printf("not numbers"); 
    else printf("not numbers"); 
    cout << endl;
    return(0);
    }