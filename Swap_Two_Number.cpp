#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;

    cout << "Enter The Value Of a : ";
    cin >> a;

    cout << "Enter The Value Of b : ";
    cin >> b;

    cout << "Before swap a : " << a << endl;
    cout << "Before swap b : " << b << endl;

    //Swap 
    temp = a;   
    a = b;
    b = temp;
    
    cout << "After swap a :" << a << endl;
    cout << "After swap b :" << b << endl;

    return 0;
}