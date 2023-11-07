#include<bits/stdc++.h>
using namespace std;

int fibo(int x){
    if(x<=1){
        return x;
    }
    else{
        return fibo(x-1)+fibo(x-2);
    }
    
}

int main()
{
    int x;
    cout << "Enter the Position : ";
    cin >> x;

    cout << "Fibonacci Sequence up to " << x << " terms:" << endl;
    for (int i = 0; i < x; i++) {
        int p = fibo(i);
        cout << p << " ";
    }
    return 0;
}

