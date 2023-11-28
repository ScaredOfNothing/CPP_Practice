// Set of used libraries
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

// Here the code calculates roots
void quadraticRoots(double a, double b, double c) {
    double delta, root1, root2;
    delta = (b * b) - 4 * a * c;
    cout << "\nThe delta of your quadratic function is: " << delta << endl;
    if (delta > 0) {
        root1 = (-b - sqrt(delta)) / (2 * a);
        root2 = (-b + sqrt(delta)) / (2 * a);
        if (root1 == root2)
            cout << "The function has a double root, and it is: " << root1 << endl;
        else
            cout << "The function has two roots, and they are: " << root1 << ", " << root2 << endl;
    } else if (delta == 0) {
        root1 = (-b) / (2 * a);
        cout << "The function has one root, and it is: " << root1 << endl;
    } else {
        cout << "The function has no real roots" << endl;
    }
}

// Combining everything into one equation
void medusa(double t[]) {
    int i = 1;
    // Using an array here
    double results[9];
    string attached[9];
    cout << "The program will calculate 10 terms belonging to your quadratic function: " << endl;
    while (i < 10) {
        results[i - 1] = t[0] * (pow(i, 2)) + t[1] * (i) + t[2];
        cout << results[i - 1] << " ,";
        i++;
    }
    cout << endl;
    string torpedo;
    for (int i = 1; i < 10; i++) {
        // append moves the array to a string and concatenates them
        torpedo.append(to_string((int)results[i - 1]));
    }
    cout << torpedo;
}

int main() {
    double tab[3];
    double a, b, c;
    cout << "Quadratic function equation: ax^2 + bx + c " << endl;
    cout << "Enter values for variables" << endl;
    cout << " a = "; cin >> tab[0];
    cout << " b = "; cin >> tab[1];
    cout << " c = "; cin >> tab[2];
    if (tab[0] == 0) {
        cout << "This program does not support linear functions" << endl;
        exit(0);
    } else
        cout << "You have created the function: (" << tab[0] << ")x^2 + (" << tab[1] << ")x + (" << tab[2] << ")" << endl;

    if (tab[0] > 0)
        cout << "The arms of the parabola are facing upwards" << endl;
    else
        cout << "The arms of the parabola are facing downwards" << endl;

    a = tab[0];
    b = tab[1];
    c = tab[2];

    void (*ptrTorpedo)(double, double, double);
    ptrTorpedo = &quadraticRoots;
    (*ptrTorpedo)(a, b, c);
    medusa(tab);

    cout << "End of the program" << endl;
    return 0;
}