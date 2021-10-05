#include <iostream>
using namespace std;
int main(){
    int money,day=0,dis=0;
    cout <<"How much money has Dee got? : ";
    cin >>money;
   do
   {
       dis++;
       day++;
       money = money - dis;
   } while (money > 0);
    money = money+dis;
    cout <<" Dee can do this for "<< day<<" days."<<endl;
    cout <<"Then he still has "<< money << " Baht.";
    return 0;
}