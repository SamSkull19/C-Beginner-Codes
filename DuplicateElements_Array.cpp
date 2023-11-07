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

    cout << "Duplicate values are : ";

    int i,j;
    for(i=0, j=i+1; i<n, j<n; i++, j++){ 
        if(arr[i] == arr[j]){
            cout << arr[i] << " ";
            
        }
    }
    return 0;
}
