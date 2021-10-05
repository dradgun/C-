#include<iostream>

using namespace std;
int main()
{
    int n ;
    int i;
    int count = 0;
     cout << "score n = ";
     cin >> n;
    int sum = 1;
    for (i=1;i<=n;i++)
    {
       for (int j=i;j<=i;j++)
       { 
         if(j%1==0)
         {
           (i % j==0);
           {
             count =count + 1;
           }
         }
       }
       if (count == 2)
       {
         sum =sum +i;
       }
       count = 0;
    }
      cout << "price = "<< sum << endl;
        return 0;
}
