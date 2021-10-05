#include<iostream>;
using namespace std;
int main(){
    int score;
    
    for(int i=1;i<=10;i++){
        
        cout<<"Input score : ";cin>> score;
            if(score>=80){
                cout<<"Student "<<i<<" : A"<< endl;
            }
            else if(score>=70){
                cout<<"Student "<<i<<" : B"<< endl;
            }
            else if(score>=60){
                cout<<"Student "<<i<<" : C"<< endl;
            }
            else if(score>=50){
                cout<<"Student "<<i<<" : D"<< endl;
            }
            else{
                cout<<"Student "<<i<<" : F"<< endl;
            }
    }
}
