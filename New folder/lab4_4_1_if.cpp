/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Operator;
    cout << "Please enter a simple expression : ";
    cin >> Operator;
    cout << "(number operator number) : ";
    int LeftOperand , RightOperand;
    cin >> LeftOperand >> RightOperand;
    int Result;

    if(Operator == '+'){
        Result = LeftOperand + RightOperand;

    }else if(Operator == '-'){
        Result = LeftOperand - RightOperand;

    }else if(Operator == 'x'){
        Result = LeftOperand * RightOperand;
    }

    else if(Operator == '/'){
        Result = LeftOperand / RightOperand;
    }
    else cout << "ERR404";
    // Display result
    cout << LeftOperand << " " << Operator << " ";
    
    cout << RightOperand << " equals " << Result << endl;
}