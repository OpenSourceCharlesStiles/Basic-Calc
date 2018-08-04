#include<iostream>

using namespace std;

int num1, num2, result;

int main()
{
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "please enter the second number: ";
    cin >> num2;

    result = num1 + num2;

    cout << num1 << " plus " << num2 << " is equal to: " << result << ".\n";

    return 0;
}
