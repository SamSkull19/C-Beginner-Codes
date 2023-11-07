#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Enter The String : ";
    getline(cin,str);

    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i] = 'X';
        }
    }

    cout << str;

    return 0;
}
