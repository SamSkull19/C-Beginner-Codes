#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, sum=0;
    cout << "Enter The Size Of Array : "; //Array Size Input
    cin >> n1 >> n2;

    int arr[n1][n2];

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){

            cout << "Enter " << i << " th Row and " << j << " th Column Value : ";
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){

            sum += arr[i][j];

        }
    }

    cout << "Total Sum : " << sum << endl;

    return 0;
}
