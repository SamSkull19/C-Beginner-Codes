#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter The Numbers : ";
    cin >> a >> b >> c;

    if(a>b && a>c){
        cout << a << " is the Largest Number" << endl;
    }
    else if(b>a && b>c){
        cout << b << " is the Largest Number" << endl;
    }
    else if(c>a && c>b){
        cout << c << " is the Largest Number" << endl;
    }
    else{
        cout << "Invalid Number" << endl;
    }
    return 0;
}