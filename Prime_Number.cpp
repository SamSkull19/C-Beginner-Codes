#include<bits/stdc++.h>
using namespace std;

void getPrime(int x);

int main()
{
    int x;
    cout << "Enter the Number : ";
    cin >> x;
    getPrime(x);
    return 0;
}

void getPrime(int x){
    int count=0;
    if(x == 1 || x==2 || x == 3){
        cout << "Prime Number" << endl;
    }

    else{
        for(int i=2; i<=x; i++){
            if(x%i==0){
                count++;
            }
        }
    }

    if(count>1){
        cout << "Not Prime Number";
    }
    else{
        cout << "Prime Number";
    }
}