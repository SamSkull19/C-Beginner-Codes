#include<iostream>
using namespace std;
int main()
{
    int length, breadth;
    int area, perimeter;

    cout << "Enter the Length : ";
    cin >> length;

    cout << "Enter the Breadth : ";
    cin >> breadth;

    // Area
    area = length*breadth;

    // Perimeter
    perimeter = 2*(length+breadth);

    cout << "Area of Rectangle : " << area << endl;
    cout << "Perimeter of Rectangle : " << perimeter << endl;

    return 0;
}