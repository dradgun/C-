#include<iostream>
using namespace std;
int main(){
        int killo = 0,price = 0,count = 0;
        cout << "Enter killometer : ";
        cin >> killo;
        while(count != killo){
            count++;
            if(count == 1){
                price += 40;
            }
            else if(count >= 2 && count <= 10){
                price += 5;
            }
            else if(count >=11 && count <= 15){
                price += 4;
            }
            else if(count >=16 && count <= 20){
                price += 3;
            }
            else if(count >= 21){
                price += 2;
            }
        }

        cout << "\n" << "Total : " << price;
        }