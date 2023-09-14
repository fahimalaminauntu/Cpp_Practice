#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    double base, height, area;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the Height : ";
    cin >> height;

    //(area = 1 / 2 * base * height;//This is not supported ! Because 0 is int number)

    // use only 3 methods -
    // 1. 0.5 * base * height;
    // 2. type casting-(double)1/2 * base * height;
    // 3. 1.0/2 * base * height;

    area = (double)1 / 2 * base * height;
    cout << "The area of Triangle is :" << area;

    getch();
}
