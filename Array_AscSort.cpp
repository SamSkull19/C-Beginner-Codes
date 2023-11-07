#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pos,temp;
    int i,j;

    cout << "Enter The Array Size : ";
    cin >> n;

    int arr[n];

    cout << "Enter The Array Values : ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "New array is :";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
