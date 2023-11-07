#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter The Value : ";
    cin >> x;
    y = x;

    for(int i = 1; i<=x; i++){
        for(int j = x; j>=i; j--){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}