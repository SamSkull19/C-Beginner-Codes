#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter The First String : ";
    cin >> str1;

    cout << "Enter The Second String : ";
    cin >> str2;

    str1.swap(str2); // Swap

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
