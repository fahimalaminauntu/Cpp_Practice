#include <iostream>
#include <conio.h>
using namespace std;

// Celsius to Farenheit ;

int main()
{

    double farn, celsius;
    cout << "Enter the Celsius :" << endl;
    cin >> celsius;

    farn = 1.8 * celsius + 32;
    cout << "Fahrenheit Temperature is :" << farn;

    getch();
}
