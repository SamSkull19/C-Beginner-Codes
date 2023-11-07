#include<bits/stdc++.h>
using namespace std;

int main()
{
    double quotient,remainder;
    int a,b;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    quotient = double(a)/double(b); // Quotient
    remainder = a%b; // Remainder

    cout << "Quotient : " << quotient << endl;
    cout << "Remainder : " << remainder << endl;

    return 0;
}