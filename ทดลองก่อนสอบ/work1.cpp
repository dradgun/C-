#include <iostream>
using namespace std;

int main()
{
    float gallon, mileage;
    cout << "Input petroleum used : "; 
    cin >> gallon;
    cout << "Input mileage : "; 
    cin >> mileage;
    cout << "1. Fuel economy  = " << mileage / gallon << " Miles per gallon (MPG)" << endl ;
    gallon *= 4.5461;
    mileage *= 1.6093;
    cout << "2. The car will use " << gallon / mileage << " Liter per kilometer" << endl;
    cout << "3. Fuel economy = " << mileage / gallon << " Kilometer per Liter (km/L)" << endl;
    return (0);
}