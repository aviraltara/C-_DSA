#include<iostream>
using namespace std;
// convert the decimal number to binary 
int main()
{
    int decimal;
    cout << "Enter the decimal number : ";
    cin >> decimal ;
    cout << endl;
    int rem ;
    int ans = 0 ; 
    int mul = 1; 
    while (decimal>0)
    {   
        rem = decimal % 2; 
        decimal = decimal>>1;
        ans += rem*mul;
        mul*=10;
    }
cout << "Answer : " << ans;
   
 return 0;
}