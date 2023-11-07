#include<bits/stdc++.h>
using namespace std;

struct computer{
    string processesor;
    int ram;
    double hdd;
    string gpu;
};

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    computer pc[n];
    for(int i=0; i<n; i++){
        cout << "Enter PC Details : " << i+1 << endl;

        cout << "Processesor : ";
        cin >> pc[i].processesor;

        cout << "Ram Size : ";
        cin >> pc[i].ram;

        cout << "HDD Size : ";
        cin >> pc[i].hdd;

        cout << "GPU Name : ";
        cin >> pc[i].gpu;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    
    for(int i=0; i<n; i++){
        cout << "PC Details : " << i+1 << endl;

        cout << "Processesor : " << pc[i].processesor << endl;

        cout << "Ram Size : " << pc[i].ram << endl; 

        cout << "HDD Size : " << pc[i].hdd << endl;

        cout << "GPU Name : " << pc[i].gpu << endl;
    }



    return 0;
}