#include<iostream>
using namespace std;
int main()
{
    int member,totalmember = 437;
    cout << "member = ";
    cin >> member;
    if (member <= totalmember && member > 218)
    {
        cout << "yes " << member << endl;
    }
    else 
    {
        cout << "end";
    }
}