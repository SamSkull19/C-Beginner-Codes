#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0, x;

    cout << "Enter the Starting Number : ";
    cin >> x;

    int i = x;
    do{
        sum+=i;
        i++;
    }while(i<x+10);
    
    cout << sum;
    return 0;
}