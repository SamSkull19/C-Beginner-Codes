#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cout << "Enter The Size Of Array : "; //Array Size Input
    cin >> n;

    int arr[n];
    cout << "Enter The Array Values: ";  // Array Values
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max=0, maxO = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>max){
            max = count;
            maxO = arr[i];
            count = 0;
        }
    }

    cout << "Max Occurance = " << max << endl;
    cout << "Max Occured = " << maxO << endl;
    return 0;
}
