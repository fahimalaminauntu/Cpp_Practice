#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int num1, num2, sum;
    cout << "Enter the number : ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Total Sum is : " << sum << endl;

    sum = num1 - num2;
    cout << "The Subtraction is : " << sum << endl;

    sum = num1 * num2;
    cout << "The Multipication is : " << sum << endl;

    sum = num1 / num2;
    cout << "The divition is : " << sum << endl;

    sum = num1 % num2;
    cout << "The reminder is :" << sum << endl;

    getch();
}

