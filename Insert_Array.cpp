#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos,t;
    int i,j;

    cout << "Enter The Array Size : ";
    cin >> n;

    int arr[n];

    cout << "Enter The Array Values : ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter The Value Position of Value to Change : ";
    cin >> pos;

    cout << "Enter The New Value : ";
    cin >> arr[pos];

    cout << "New array is :";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
