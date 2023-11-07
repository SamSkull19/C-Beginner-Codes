#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2, str3;

    cout << "Enter The String : ";
    getline(cin, str1);

    cout << "Enter The part you want to find : ";
    getline(cin, str2);

    cout << "Enter The part you want to replace : ";
    getline(cin, str3);

    int pos;
    
    while ((pos = str1.find(str2)) != string::npos) {
        str1.replace(pos, str2.size(), str3);
    }

    cout << str1 << endl;

    return 0;
}
