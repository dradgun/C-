#include <iostream>
using namespace std;
int main()
{
    int day, month, year;

    cout << "Please enter day month and year : ";
    cin >> day >> month >> year;
    while (day > 30 || day < 1 || month > 12 || month < 1 || year < 2513 || year > 2599)
    { 
        cout << "Day Month and Year Error !!!! "<< endl;
        cout << "Please enter day month and year : ";
        cin >> day >> month >> year;
    }
    
        if (day <= 30 && day >= 1 && month <= 12 && month >= 1 && year >= 2513 && year <= 2599)
        {
            int totalmonths, totalyears, DMY, totalDMY, PAYDMY;
            int d1 = 1, m1 = 30, y2513 = 904680;/*วันที่1 = 1วัน เดือน1 = 30 วัน  ปี2513 = 904680 วัน*/
            totalmonths = month * 30;
            totalyears = year * 360; /* 1 year = 360 วัน โจทให้เดือนละ 30 วัน  12 * 30 = 360*/
            DMY = day + totalmonths + totalyears;
            totalDMY = d1 + m1 + y2513; 
            PAYDMY = DMY - totalDMY;
            cout << "The difference is about " << PAYDMY << " days." << endl;
            cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -";
        }
    /*ถ้าใส่ค่า วัน เดือน ปี ผิด จะ ทำการทำ ซ้ำ จนกว่าจะใส่ค่าที่ถูกต้องถึงจะออกจากลูป while 
    แล้วนำค่าที่กรอกถูกต้องไปตรวจสอบใน if แล้วแสดงค่าที่คำนวนวันที่ห่างจาก วันที่ 1 มกราคม 2513 กี่วัน แล้วจบการทำงาน*/
}  