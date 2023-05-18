#include <iostream>
#include <math.h>
using namespace std;

char operation;
double first_number;
double second_number;
double result;
double result_quo;
double result_rem;
double result_add;
double result_pro;
double result_power;
double result_sq_;
double result_sq__;
double result_sub;
char exit_;
double add(double number0, double number1)
{
    return number0 + number1;
}
double sub(double number0, double number1)
{
    return number0 - number1;
}
double pro(double number0, double number1)
{
    return number0 * number1;
}
double power(double number0, double number1)
{
    return pow(number0, number1);
}
double squarert(double number0)
{
    return sqrt(number0);
}
double quo(double number0, double number1)
{
    return number0 / number1;
}
double rem(double number0, double number1)
{
    return fmod(number0, number1);
}
int main()
{
    cout << "Select your operation method: \n";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "Please provide first number: \n";
        if (cin >> first_number)
        {
            cout << "Please provide second number: \n";
            if (cin >> second_number)
            {
                result = add(first_number, second_number);
                cout << first_number << "+" << second_number << " gives " << result;
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case '-':
        cout << "Please provide first number: \n";
        if (cin >> first_number)
        {
            cout << "Please provide second number: \n";
            if (cin >> second_number)
            {
                result = sub(first_number, second_number);
                cout << first_number << "-" << second_number << " gives " << result;
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case '/':
        cout << "Please provide divident number: \n";
        if (cin >> first_number)
        {
            cout << "Please provide divisor number: \n";
            if (cin >> second_number)
            {
                result_rem = rem(first_number, second_number);
                result_quo = quo(first_number, second_number);
                cout << first_number << "/" << second_number << " gives " << result_rem << " as remainder"
                     << " and" << result_quo << " as quotient";
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case '*':
        cout << "Please provide first number: \n";
        if (cin >> first_number)
        {
            cout << "Please provide second number: \n";
            if (cin >> second_number)
            {
                result = pro(first_number, second_number);
                cout << first_number << "*" << second_number << " gives " << result;
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case '^':
        cout << "Please provide base number: \n";
        if (cin >> first_number)
        {
            cout << "Please power second number: \n";
            if (cin >> second_number)
            {
                result = power(first_number, second_number);
                cout << first_number << "^" << second_number << " gives " << result;
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case 's':
        cout << "Please provide number: \n";
        if (cin >> first_number)
        {

            result = squarert(first_number);
            cout << "Square root of " << first_number << " is " << result;
            cin >> exit_;
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    case 'a':
        cout << "Please provide first number: \n";
        if (cin >> first_number)
        {
            cout << "Please provide second number: \n";
            if (cin >> second_number)
            {
                result_add = add(first_number, second_number);
                result_sub = sub(first_number, second_number);
                result_power = power(first_number, second_number);
                result_pro = pro(first_number, second_number);
                result_rem = rem(first_number, second_number);
                result_quo = quo(first_number, second_number);
                result_sq_ = squarert(first_number);
                result_sq__ = squarert(second_number);
                cout << first_number << "+" << second_number << " gives " << result_add << "\n"
                     << first_number << "-" << second_number << " gives " << result_sub << "\n"
                     << first_number << "*" << second_number << " gives " << result_pro << "\n"
                     << first_number << "/" << second_number << " gives " << result_quo << " as quotient"
                     << " and " << result_rem << " as remainder"
                     << "\n"
                     << first_number << "^" << second_number << " gives " << result_power << "\n"
                     << "Square root of " << first_number << " is " << result_sq_ << "\n"
                     << "Square root of " << second_number << " is " << result_sq__;
                cin >> exit_;
            }
            else
            {
                cout << "Please provide a valid number";
            }
        }
        else
        {
            cout << "Please provide valid number!";
        }
        break;
    default:
        cout << "You need to provide a valid operation!";
        break;
    }
    return 0;
}
