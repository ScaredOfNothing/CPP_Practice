// Set of used libraries
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <vector>
using namespace std;

// Recursive sum function
int recursive_sum(int a, int b) {
    // The two lines below stop infinite recursion
    if (a == b)
        return a;
    // This part of the code increases the value of 'a' by 1 with each recursion
    return a + recursive_sum(a + 1, b);
};

// Pointers in a function
void Hello_Eniu() {
    cout << "HELLO ENIU!" << endl;
};

// These two voids are used by an overloaded function
void printNumber(int x) {
    cout << "printing an integer: " << x << endl;
};
void printNumber(float x) {
    cout << "printing a float: " << x << endl;
};

// This void belongs to the presentation of append()
void append_demo(string str1, string str2) {
    // Appends str2 to str1
    str1.append(str2);
    cout << "Using append(): ";
    cout << str1 << endl;
}

// Void specifically for c_str
void print_text(const char* text) {
    printf("%s\n", text);
}

int main() {
    // Here is recursion
    int a = 3, b = 9;
    cout << "Sum from recursion = " << recursive_sum(a, b) << endl;

    // Starting an overloaded function
    int c = 21;
    float d = 28.542;
    printNumber(c);
    printNumber(d);

    // Function with a pointer
    typedef void(*Hello_Eniu_function)();

    Hello_Eniu_function function = Hello_Eniu;

    function();

    // Starting to use erase
    vector<int> myVector;

    // Setting values from 1 to 10
    for (int i = 1; i <= 10; i++) 
        myVector.push_back(i);

    // Erasing the 6th element
    // begin returns an iterator to the initial element of the vector
    myVector.erase(myVector.begin() + 5);

    // Erasing the first 3 elements
    myVector.erase(myVector.begin(), myVector.begin() + 3);

    cout << "my vector contains:";
    for (unsigned i = 0; i < myVector.size(); ++i)
        cout << ' ' << myVector[i];
    cout << '\n';

    // Swapping variables
    int captain = 69, bomb = 420;

    cout << "captain variable: " << captain << " bomb variable: " << bomb << endl;
    // Here the variables get swapped values
    swap(captain, bomb);
    cout << "swap will now occur" << endl;
    cout << "captain variable: " << captain << " bomb variable: " << bomb << endl;

    string str1("The sum is equal to ");
    string str2("the excitement of both audiences");
   
    cout << "Some string on which append works, idk: " << str1 << endl;
    append_demo(str1, str2);

    // Example of c_str
    string example;
    example = "In this example, I demonstrate the correct use of c_str.";
    print_text(example.c_str());

    // End of the program
    return 0;
};