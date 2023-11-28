// Set of used libraries
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <vector>
using namespace std;

// int for variables that can be manipulated from the console
int x, y;

// Main function
int main() {
    // Function declarations
    cout << "Choose the value of x" << endl;
    cin >> x;
    cout << "Choose the value of y" << endl;
    cin >> y;
    // Operations on functions
    cout << "Operations performed on x and y are as follows:" << endl;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Modulus Division: " << x % y << endl;

    // atoi and atof
    // atof converts a string to an argument for the double function
    // atoi returns the value of the string converted to int
    char* before_atof = "98.45";
    char* before_atoi = "94";
    // double represents a numerical value (including decimals) in the compiler
    double after_atof = atof(before_atof);
    int after_atoi = atoi(before_atoi);

    cout << after_atof << endl;
    cout << after_atoi << endl;

    // End of the program
    return 0;
}