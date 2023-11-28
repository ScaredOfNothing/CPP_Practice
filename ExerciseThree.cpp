// Set of used libraries
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;
using std::cout;

struct Monkey {
    string name;
    int age;
    bool cool;
};

int main(){
    // int a with a pointer
    int a = 5;
    int* pointer_1 = &a;
    // int b with a pointer
    int b = 5;
    int* pointer_2 = &b;
    int array[5] = {1, 3, 5, 7, 9};
    // here is the new element
    int *array_pointer = new int(5);

    // all couts have a clear label of what they display
    cout << "value of the first pointer: " << *pointer_1 << endl;
    cout << "value of the second pointer: " << *pointer_2 << endl;
    cout << "sum of pointer values: " << *pointer_1 + *pointer_2 << endl;
    cout << "difference of pointer values: " << *pointer_1 - *pointer_2 << endl;
    cout << "product of pointer values: " << *pointer_1 * *pointer_2 << endl;
    cout << "division of pointer values: " << *pointer_1 / *pointer_2 << endl;
    cout << "address of the first variable: " << pointer_1 << endl;
    cout << "address of the second variable: " << pointer_2 << endl;
    cout << "address of the array: " << array << endl;
    cout << "3rd element of the array: " << array[2] << endl;
    cout << "4th element of the array: " << array[3] << endl;
    cout << "address of the array: " << array << endl;
    // here is the delete element
    delete array_pointer;

    Monkey Bozydar = {"Bozydar", 12, false};
    Monkey* Bozydar_pointer = &Bozydar;
    cout << "Bozydar" << endl;
    // pointers related to a simple monkey structure
    cout << Bozydar_pointer->name << endl;
    cout << Bozydar_pointer->age << endl;
    cout << Bozydar_pointer->cool << endl;

    return 0;
};