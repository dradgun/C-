#include <iostream>
using namespace std;
int main()
{
    int Num, Value, Sum;
    bool Flag = true;
    Num = 1;
    Sum = 0;
    do
    {
        cout << "Enter value " << Num << " : ";
        cin >> Value;
        if (Value > 0)
        {
            Sum += Value;/*sum =sum + value*//*sum= 8+4 *//*sum = 12*/
            Num++;/*3*/
        }
        else Flag = false;
    } while (Flag == true);
    if (Num > 1)
    {
        float Avg;
        Avg = static_cast<float>(Sum) / --Num;/*-num*//*12 / 3 *//*Avg = 4*/
        out <c< "Average of data = " << Avg << endl;
    }
    else cout << "No data input." << endl;
    return (0);
}