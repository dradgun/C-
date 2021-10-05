#include <stdio.h>
#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
 int score;
    cout << "score mathematics"<< endl;
    cout << "Input score = ";
    cin >> score ;

if(score>=0&&score<=100)
 { if(score>=80)
printf("score grade A",score);

else if(score>=70)
printf("score grade B",score);

else if(score>=60)
printf("score grade C",score);

else if(score>=50)
printf("score grade D",score);

else
printf("score grade F",score);
  return(0);
  }
}
