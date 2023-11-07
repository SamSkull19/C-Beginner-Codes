#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter The Number : ";
    cin >> number;

    if(number >=100 && number <= 200){
        cout << "In Range between 100 to 200" << endl;
    }
    else{
        cout << "Out of Range" << endl;
    }
    return 0;
}