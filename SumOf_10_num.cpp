#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,x;

    cout << "Enter the Starting Number : ";
    cin >> x;

    for(int i = x; i < x+10; i++){
        sum+=i;
    }
    cout << sum;
    return 0;
}