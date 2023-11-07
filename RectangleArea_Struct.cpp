#include<iostream>
using namespace std;

struct areaR{
    int length;
    int width;
    double area;
    double perimeter;
};

int main()
{
    areaR rectangle;

    cout << "Enter Length of Rectangle : ";
    cin >> rectangle.length;  

    cout << "Enter Width of Rectangle : ";
    cin >> rectangle.width; 

    rectangle.area = rectangle.length*rectangle.width;

    rectangle.perimeter = 2*(rectangle.length+rectangle.width);

    cout << "Area of Rectangle : " << rectangle.area << endl;

    cout << "Perimeter of Rectangle : " << rectangle.perimeter << endl;

    return 0;
}
