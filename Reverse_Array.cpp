#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s,temp=0;
    cout << "Enter The Array Size : ";
    cin >> n;

    int arr[n];

    cout << "Enter The Array Values : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    s = n-1;
    int i = 0;
    while(s>=i){
        temp = arr[i];
        arr[i] = arr[s];
        arr[s] = temp;
        i++;
        s--;
    }

    cout << "Reverse Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
