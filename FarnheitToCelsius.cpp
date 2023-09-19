#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    double farn, celsius;
    cout << "Enter the Farheit Temperature :";
    cin >> farn;

    celsius = (farn - 32) / 1.8;

    cout << "The Celsius Temperature is :" << celsius;

    getch();
}