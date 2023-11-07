#include<bits/stdc++.h>
using namespace std;

int factorial(int x);

int main(){
    int a,fact=0;
    cout << "Enter The Value : ";
    cin >> a;
    fact = factorial(a);
    cout << "Factorial : " << fact << endl;
    return 0;
}

int factorial(int x){
    int f=1;
    if(x>0){
        f = x*factorial(x-1);
    }
    return f;
}
