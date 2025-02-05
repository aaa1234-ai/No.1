#include <iostream>
using namespace std;

// double calculate(double a, double b, double (*p)(double a, double b)); //指针函数
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);

int main(int argc, char *argv[])
{
    double a, b;
    double (*pf[3])(double a, double b) = {add, subtract, multiply}; //指针数组;(*pf)[3]:数组指针

    cout << "Enter two numbers (q to quit): ";
    while (cin >> a >> b)
    {
        for (int i = 0; i < 3; i++)
        {
            switch (i)
            {
            case 0:
            {
                cout << "The " << a << " + " << b << " answer is: " << pf[i](a, b) << endl;
                break;
            }
            case 1:
            {
                cout << "The " << a << " - " << b << " answer is: " << (*pf[i])(a, b) << endl;
                break;
            }
            case 2:
            {
                cout << "The " << a << " * " << b << " answer is: " << (*pf[i])(a, b) << endl;
                break;
            }
            }
        }
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done!" << endl;

    return 0;
}

/* double calculate(double a, double b, double (*p)(double a, double b))
 {
     return (*p)(a, b); // p(a, b);
 }*/

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}
