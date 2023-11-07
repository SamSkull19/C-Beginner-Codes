#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter The First String : ";
    cin >> str1;

    cout << "Enter The Second String : ";
    cin >> str2;

    int a;
    a = str1.compare(str2); // returns 0 for same string and 1 for different string
    cout << a;

    if(str1.compare(str2)==0){
        cout << "String are equal" << endl;
    }

    else{
        cout << "String are not equal" << endl;
    }

    return 0;
}
