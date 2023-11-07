#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, p, ans;
    long long sum=0, count=0;

    cout << "Enter the Number : ";
    cin >> x;
    
    p = x;

    while(p!=0){
        p/=10;
        count++;
    }

    cout << "Number Of Digits : " << count << endl;

    return 0;
}

