#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter The Array Size : ";
    cin >> n;

    int arr[n];
    string sub[n];

    cout << "Enter The Subjects Name : ";
    for(int i=0; i<n; i++){
        cin >> sub[i];
    }

    for (int i = 0; i<n; i++){
        cout << "Enter Your Marks For " << sub[i] << " : ";
        cin >> arr[i] ;
        cout << endl;
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int s = sum;

    double avg=0,pct=1;
    avg = sum/n;
    cout << "Average Number of Your Subjects : " << avg << endl;

    pct = (s*100)/(n*100);
    cout << "Percentage of Your Subjects : " << pct << " % " << endl;

    return 0;
}