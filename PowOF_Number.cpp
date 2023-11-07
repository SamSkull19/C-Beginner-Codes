#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, p, ans;
    cout << "Enter the Number : ";
    cin >> x;
    cout << "Enter the Power : ";
    cin >> p;

    ans = pow(x,p);
    cout << "Answer : " << ans << endl;
    return 0;
}