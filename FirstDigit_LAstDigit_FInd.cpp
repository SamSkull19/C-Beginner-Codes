#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,first,last,mid;
    int r1,r2;

    cout << "Enter the Number : ";
    cin >> n;

    first = n/100;
    last = n%10;
    mid = (n/10)%10;

    cout << "First Digit : " << first << endl;
    cout << "Middle Digit : " << mid << endl;
    cout << "Last Digit : " << last << endl;

    return 0;

}