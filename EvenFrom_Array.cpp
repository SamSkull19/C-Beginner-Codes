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

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i] << " is Even Number" << endl;
        }
        else{
            cout << arr[i] << " is Odd Number" << endl;
        }
    }
    return 0;
}