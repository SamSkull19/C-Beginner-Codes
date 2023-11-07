#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cout << "Enter the Number for Multiplication Table : ";
    cin >> n;

    for(int i = 1; i <=10; ++i){
        s = n*i;
        cout << n << "\t" << "X" << "\t" << i << "\t" << "=" << "\t" << s << endl;
    }

    return 0;
}