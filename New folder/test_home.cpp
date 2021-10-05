#include <iostream>
using namespace std;

int main()
{
    int area , cash = 0;
    char quality,size;

    for(int i=0;i<1;){
    cout << "Enter of area : "; cin >> area;

        if(area >= 20 && area <= 40){
            size = 'S';
            cash += 200000; i++;
        } else if(area <= 100){
            size = 'M';
            cash = 200000 + ((area - 40) * 3000); i++;
        } else if (area >= 101){
            size = 'L';
            cash = 200000 + ((area - 60) * 2000) + 150000; i++;
        } else {
            cout << "--------- You entered incorrectly, please enter again. ----------";
        }
    }

    for(int i=0;i<1;){
        cout << "Enter type of the material : "; cin >> quality;
        switch (quality){
            case 'B':
            case 'b':
                if(size == 'S'){
                    cash += area * 5000; i++;
                }else if(size == 'M'){
                    cash += area * 7500; i++;
                }else {
                    cash += area * 15000; i++;
                }
            break;

            case 'G':
            case 'g':
                if(size == 'M'){
                    cash += area * 10000; i++;
                }else{
                    cash += area * 20000; i++;
                }
            break;

            case 'P':
            case 'p':
                if(size == 'M'){
                    cash += (area * 15000); i++;
                }else{
                    cash += (area * 30000); i++;
                }
            break;

            default:
            cout << "--------- You entered incorrectly, please enter again. ----------" << endl;
        }
    }

    cout << "The house will cost " << cash << " baht to build";
    return (0);
}
