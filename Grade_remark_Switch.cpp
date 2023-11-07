#include<bits/stdc++.h>
using namespace std;

string getRemarks(char num){
    switch(num){
        case 'A':
            return "Excelent";
        case 'B':
            return "Good";
        case 'C':
            return "Average";
        case 'D':
            return "Below Average";
        case 'E':
            return "Pass";
        case 'F':
            return "Fail";
        default:
            return "Invalid";
    }
}

int main()
{
    string remarks;
    char ch;

    cout << "Enter Your Score : ";
    cin >> ch;

    remarks = getRemarks(ch);
    cout << remarks;
    
    return 0;
}