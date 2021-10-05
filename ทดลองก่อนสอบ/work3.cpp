#include <iostream>
using namespace std;

int main()
{
    int distance, km, price;
    cout << "Enter Distance : ";
    cin >> distance;
    if(distance > 20){
        km = distance - 20;
        price += km * 2;
        distance -= km;
    }
    if(distance > 15){
        km = distance - 15;
        price += km * 3;
        distance -= km;
    }
    if(distance > 10){
        km = distance - 10;
        price += km * 4;
        distance -= km;
    }
    if(distance > 1){
        km = distance - 1;
        price += km * 5;
        distance -= km;
    }
    if(distance >= 0){
        price += 40;
    }
    cout << "Taxi price is : " << price << " baht";
    return 0;
}