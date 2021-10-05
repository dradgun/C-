#include <iostream>
using namespace std;

int main()
{
    int area, AreaPrice, MaterialPrice;
    char typeArea, material;
    cout << "Enter the area : ";
    cin >> area;
    cout << "Enter type of material : ";
    cin >> material;
    if(material == 'B' || material == 'b'){
        if(area >= 20 && area <= 40){                   // S
            AreaPrice = area * 200000;
            MaterialPrice = area * 5000;
        }else if (area >= 41 && area <= 100){           // M
            AreaPrice = 200000+((area - 40)*3000);
            MaterialPrice = area * 7500;
        }else if (area >= 101){                         // L
            AreaPrice = 200000+150000+((area - 60)*2000);
            MaterialPrice = area * 15000;
        }else{
            cout << "Error";
        }
    }else if(material == 'G' || material == 'g'){
        if (area >= 41 && area <= 100){                 // M
            AreaPrice = 200000+((area - 40)*3000);
            MaterialPrice = area * 10000;
        }else if (area >= 101){                         // L
            AreaPrice = 200000+150000+((area - 60)*2000);
            MaterialPrice = area * 20000;
        }else{
            cout << "Error";
        }
    }else if(material == 'P' || material == 'p'){
        if (area >= 41 && area <= 100){                 // M
            AreaPrice = 200000+((area - 40)*3000);
            MaterialPrice = area * 15000;
        }else if (area >= 101){                         // L
            AreaPrice = 200000+150000+((area - 60)*2000);
            MaterialPrice = area * 30000;
        }else{
            cout << "Error";
        }
    }else{
        cout << "Error";
    }

    if(AreaPrice != 0 && MaterialPrice != 0){
        cout << "The house will cost " << AreaPrice + MaterialPrice << " baht to build.";
    }
    return (0);
}