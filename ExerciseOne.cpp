#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int a, b;

    char opt;

    printf("Simple calculator!\n");

    cout << "Enter two numbers to conduct calculations!" << endl;

    cout << "Enter first number : " << endl;
    scanf("%d", &a);

    cout << "Enter second number :" << endl;
    scanf("%d", &b);

    cout << "Pick you equation!: Adding = +, Subtraction = -, Multiplication = *, Dividing = /, Dividing Modulo = %" << endl;
    cin.clear();
    fflush(stdin);
    opt = getchar();

    while ((b == 0) && (opt == '/'))
    {
        cout
            << "We cannot divide by 0 ; D" << endl;
        return 0;
    }

    if (opt == '+')
    {

        printf("Adding = %d \n", a + b);
    }
    else if (opt == '-')
    {
        cout
            << "Subtracing =" << a - b << endl;
    }
    else if (opt == '*')
    {
        cout
            << "Multiplicating =" << a * b << endl;
    }
    else if (opt == '/')
    {
        cout
            << "Dividing =" << a / b << endl;
    }
    else if (opt == '%')
    {
        cout
            << "Dividing modulo =" << a % b << endl;
    }
    else
    {
        cout << "You picked wrong equation : (" << endl;
    }

    for (int i = 3; i >= 0; i = i - 1)
    {
        printf("Program will shut off in: %d \n", i);
    }

    return 0;
}
