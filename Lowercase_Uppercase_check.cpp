#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Letter : ";
    cin >> ch;

    if(ch>='a' && ch<='z'){
        cout << "Lower Case" << endl;
    }

    else if(ch>='A' && ch<='Z'){
        cout << "Upper Case" << endl;
    }
    else{
        cout << "Invalid Character" << endl;
    }
    return 0;
}