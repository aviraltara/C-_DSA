#include<iostream>
using namespace std;
int main()
{int sum  = 0 ;
int num ; 
cout << "Enter the number = ";
cin >> num ; 
 while (num>9)
 {
    while (num!=0)
    {
        int rem = num%10;
        sum = sum + rem ; 
        num = num / 10 ; 

    }
    num = sum ; 
 }
cout << sum ; 
 return 0;
}