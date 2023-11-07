#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fact=1, x;

    cout << "Enter the Starting Number : ";
    cin >> x;

    while(x!=0){
        fact*=x;
        x--;
    }
    cout << "Factorial : " << fact;
    return 0;
}