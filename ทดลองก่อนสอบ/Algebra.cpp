#include <iostream>
#include <math.h>
using namespace std;
int main(){
        const double pi = 3.14;
        float r,area,choice,circum,volume;
        cout << "Enter the number of radious : ";
        cin >> r;
        cout << "1. calculate the circumference of circle  "<<endl;
        cout << "2. calculate the area of circle  "<<endl;
        cout << "3. calculate the volume of phere  "<<endl;
        cout << "Enter the choice : ";
        cin >> choice;
        if (choice == 1){
                circum = 2.0*pi*r;
                cout << "Circumference of the circle : " << circum << endl;
        }
        else if (choice == 2){
                area = pi*pow(r,2);
                cout << "Area of the circle : " << area << endl;
        }
        else if (choice == 3){
                volume = (4.0/3.0) * pi *pow(r,3);
                cout << "Volume the circle : " << volume << endl;
        }
        return 0;
}