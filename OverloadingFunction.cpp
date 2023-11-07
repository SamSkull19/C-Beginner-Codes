#include<bits/stdc++.h>
using namespace std;

void func(int a,int b);
void func(float a, float b);
void func(int a,int b,int c);
void func(string a,string b);

int main()
{
    func(2,7);
    func(5,8);
    func(6,9,3);
    func("Vegita ","Goku");
    
    return 0;
}

void func(int a,int b){
    cout << a+b << endl;
}

void func(float a, float b){
    cout << a+b << endl;
}

void func(int a,int b,int c){
    cout << a+b << endl;
}

void func(string a,string b){
    cout << a+b << endl;
}