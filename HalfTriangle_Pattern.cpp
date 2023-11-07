#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter The Value :";
    cin >> x;

    for(int i = 1; i<=x; i++){
        for(int j = 1; j<=i; j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}