#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Size Of Array : "; //Array Size Input
    cin >> n;

    int arr[n];
    cout << "Enter The Array Values: ";  // Array Values
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum=0, mul=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mul*=arr[i];
    }
    
    cout << "Sum = " << sum << endl;
    cout << "Mul = " << mul << endl;
    return 0;
}