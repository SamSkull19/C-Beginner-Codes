#include<bits/stdc++.h>
using namespace std;

string func(int x);

int main()
{
    int a;
    string str;
    cout << "Enter The Value : ";
    cin >> a;

    str = func(a);
    cout << "Number is " << str << endl;
    return 0;
}


inline string func(int x){ 
    string s;
    int a, count;
    a = x;
    count = log10(a)+1; // To count digit in a number

    int sum=0, rem;

    while(a > 0){
        rem = a%10;
        sum = sum+pow(rem,count); // Power Function
        a/=10;
    }

    if(sum == x){
        s = "an Armstrong Number";
    }

    else{
        s = "not an Armstrong Number";
    }
    
    return s;
}
