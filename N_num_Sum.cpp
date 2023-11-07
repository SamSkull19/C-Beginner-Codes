#include<iostream>
using namespace std;

int nSum(int a, int b);

int main()
{
    int n,x;
    cout << "Enter The Starting Number : ";
    cin >> n;

    cout << "Enter The Number to Count Sum : ";
    cin >> x;

    int sum = nSum(n,x);
    cout << x << "th Number of Sum : " << sum << endl;

    return 0;
}

int nSum(int a, int b){
    int sum=0;
    sum = sum+a;
    if(a==b){
        return sum;
    }
    else{
        return sum + nSum(a+1,b);
    }    
}