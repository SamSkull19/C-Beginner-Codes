#include<bits/stdc++.h>
using namespace std;

string func(int x);

int main()
{
    int a;
    string str;
    cout << "Enter The Value : ";
    cin >> a;

    str = func(a);
    cout << "Number is " << str << endl;
    return 0;
}


inline string func(int x){ 
    string s;
    if(x%2==0){
        s = "Even";
    }
    else{
        s = "Odd";
    }
    return s;
}
