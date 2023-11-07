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

    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i] = temp;
            }
        }
    }


    cout << "2nd Highest Values = " << arr[1] << endl;
    return 0;
}
