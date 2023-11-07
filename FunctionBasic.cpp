#include<bits/stdc++.h>
using namespace std;

void fun(int x);

int main()
{
    int a,b,s;
    cout << "Enter The Values : ";
    cin >> a >> b;
    s = a+b;
    fun(s);
    return 0;
}

void fun(int x){
    cout << "Sum : " << x <<endl;
}
