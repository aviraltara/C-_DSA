#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int binary ;
    cout << "Enter the no. : ";
    cin >> binary ;
    int num = 0  ; 
    int i =  -1 ;
    while(binary!=0){
        int n = binary%10;
        num = (n*2*pow(2,i)) + num;
        binary/=10;
        i++;
    }
    cout << num;
    return 0;
}