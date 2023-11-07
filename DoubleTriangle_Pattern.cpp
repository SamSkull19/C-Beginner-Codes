#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter The Value : ";
    cin >> x;

    //Upper Triangle
    for(int i = 1; i <= x;i++){

        for(int j = 1; j <= x-i; j++){
            cout << "   "; //Space Print
        }
        
        for(int j = 1; j <= 2*i-1; j++){
            cout << " * "; //Star Print
        }
        cout << endl;
    }

    //Lower Triangle
    for(int i = x-1; i>=1; i--){

        for(int j = 1; j <= x-i; j++){
            cout << "   "; //Space Print
        }

        for(int j = 1; j <= 2*i-1; j++){
            cout << " * "; //Star Print
        }
        cout << endl;
    }
    return 0;
}