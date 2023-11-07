#include<bits/stdc++.h>
#include<array>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Size Of Array : ";  //Array Size Input
    cin >> n;

    int arr[n];
    cout << "Enter The Array Values: ";  // Array Values
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    for(int i=0; i<n; i++){         // Minimum Value Find
        if(min>arr[i]){
            min = arr[i];
        }
    }
    
    cout << "Minimum Value : " << min << endl;
    
    return 0;
}