#include<bits/stdc++.h>
using namespace std;

int func(int x,int y,int z);

int main()
{
    int a,b,c,sum;
    cout << "Enter The Values : ";
    cin >> a >> b >> c;

    sum = func(a,b,c);
    cout << "Sum : " << sum << endl;
    return 0;
}


inline int func(int x,int y,int z){     // inline is used in fuction to reduce the compilation time
    int s;
    s = x+y+z;
    return s;
}
