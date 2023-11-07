#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f_name, l_name, address;
    cout << "Enter your First Name : ";
    cin >> f_name;

    cout << "Enter your Last Name : ";
    cin >> l_name;

    cin.ignore(); //Cin flush

    cout << "Enter your Address : ";
    getline(cin,address);

    string full_name = f_name+l_name; // f_name.append(l_name) all string will stored in f_name;

    cout << "Full Name : " << full_name << endl;
    cout << "Address : " << address << endl;

    int a,b,c,d;

    a = full_name.length();     // full_name.size()
    b = f_name.length();        // f_name.size()
    c = l_name.length();        // l_name.size()
    d = address.length();       // address.size()

    cout << "Full Name String Length : " << a << endl;
    cout << "First Name String Length : " << b << endl;
    cout << "Last Name String Length : " << c << endl;
    cout << "Address String Length : " << d << endl;

    return 0;

}