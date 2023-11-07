#include<bits/stdc++.h>
using namespace std;

struct university{      // Structure Definition
    string u_name;
    int dept_num;
    int teacher_num;
    double cost;
    string vc_name;
};

int main()
{
    university uni;     // University is a datatype here

    uni.u_name = "SUST";    //Accessing university datatypes
    uni.dept_num = 12;
    uni.teacher_num = 40;
    uni.cost = 2100.56;
    uni.vc_name = "Hero Alam";
    
    cout << uni.u_name << endl;
    cout << uni.dept_num << endl;
    cout << uni.teacher_num << endl;
    cout << uni.cost << endl;
    cout << uni.vc_name << endl;

    
    return 0;
}