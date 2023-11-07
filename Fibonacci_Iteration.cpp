#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, first = 0, second = 1, fibo = 0;
    cout << "Enter the Position : ";
    cin >> n;

    cout << "Fibonacci Sequence up to " << n << " terms:" << endl;
    while(n--){
        cout << first << " ";
        fibo = first+second;
        first = second;
        second = fibo;
    }
    return 0;
}