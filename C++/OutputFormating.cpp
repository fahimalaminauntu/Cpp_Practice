#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{

    float num1, num2, sum;
    cout << "Enter the number : ";
    cin >> num1 >> num2;

    cout << showpoint;

    cout << fixed;           // for fixed point value use  this before setprecision
    cout << setprecision(2); // Header file #include<iomanip>

    sum = num1 + num2;
    cout << setw(20) << "Total Sum is : " << sum << endl;

    cout << noshowpoint;

    sum = num1 - num2;
    cout << setw(20) << "The Subtraction is : " << sum << endl;

    sum = num1 * num2;
    cout << setw(20) << "The Multipication is : " << sum << endl;

    sum = num1 / num2;
    cout << setw(20) << "The divition is : " << sum << endl;

    
    // For use Setw this is fixed the value or messege in the output
    //  sum = num1 % num2;
    //  cout << "The reminder is :" << sum << endl;

    getch();
}
