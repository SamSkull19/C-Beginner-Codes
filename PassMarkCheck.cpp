#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mark;
    cout << "Enter your Marks : ";
    cin >> mark;

    if(mark >= 40 && mark <= 100){
        cout << "Your have passed in this subject" << endl;
    }

    else if(mark >=0 && mark <40){
        cout << "You have failed in this subject" << endl;
    }

    else{
        cout << "Invalid Number" << endl;
    }

    return 0;
}
