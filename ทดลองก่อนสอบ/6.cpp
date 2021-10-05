#include <iostream>
using namespace std;
int main()
{
    char late, ot;
    int salary,OThour;
    
        cout << "Enter Salary : ";
        cin >> salary;
        cout << "Late (Y/N) : ";
        cin >> late;
        cout << "Over Time Hour (Y/N) : ";
        cin >> ot;

    while (late != 'N' && late != 'Y')
    {
        cout << "Late (Y/N) : ";
        cin >> late;
    }

    while (ot != 'N' && ot != 'Y')
    {
        cout << "Over Time Hour (Y/N) : ";
        cin >> ot;
    }
    if (ot == 'Y')
    {
        cout << "Enter OT Hour : ";
        cin >> OThour;
    }

    if (late == 'N' && ot == 'Y')
    {
        salary += 1000 + ( OThour * 200);
    }
    else if (late == 'Y' && ot == 'N')
    {
        salary = salary;
    }
    else if (late == 'N' && ot == 'N')
    {
        salary +=  1000;
    }
    else if (late == 'Y' && ot == 'Y')
    {
        salary +=  ( OThour * 200);
    }
    cout << "Salary : " << salary << endl;

    return (0);
}