#include <iostream>
#include <cstdio>

using namespace std;

int main()

{
    string a;
    string b;
    int n1 = 1;
    int n2 = --n1;
    int n3 = n1--;
    int x;
    int y;
    int var = 9;
    int o = 43, p = 62, u;
    // tutaj tworze XOR/alternatywe wykluczajaca
    u = o ^ p;
    // tutaj jest tablica jednowymiarowa
    int malpa_1d[5] = {1, 2, 3, 4, 5};
    // tutaj tworze tablice dwuwymiarowa
    int malpa_2d[3][3] = {{10, 20, 30}, {40, 50, 60}};
    /* po cout znajduje sie operator bitowy przesuniecia w lewo
     a po cin znajduje sie operator bitowy przesuniecia w prawo */
    cout
        << "What is you name?" << endl;
    cin >> a;
    cout << "Hello   " << a << endl;
    printf("Program will show first pre and post decrementation 1\n");
    std::cout << "Number to do equation on = " << n1 << '\n'
              << "Predekrementation = " << n2 << '\n'
              << "Postdekrementation = " << n3 << '\n';
    printf("Now program will test functioning of the  while loop \n");
    cout << "Enter x " << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    // petla while sprawdza dwa warunki
    // while jest operatorem warunkowym
    // pomiedzy warunkami znajduje sie operator bitowy "AND"
    while ((x == 1) && (y == 1))
    {
        // funkcja nie konczy sie "return 0" bo na tym polega sekret
        cout << "You dicovered a secret lol" << endl;
    }
    // if jest operatorem warunkowym
    // program sprawdza czy podano wartosc 1000 dla x albo y
    // pomiedzy warunkami znajduje sie operator bitowy "OR"
    if ((x == 1000) || (y == 1000))
    {
        cout << "Number 1000 is prohibited" << endl;
        cout << "Try again" << endl;
        return 0;
    }
    cout << "Now program will test operator dopelnienia bitowego " << endl;
    printf("value = %d \n", ~var);
    std::cout << "XOR/Alternative to exclude a and b =  " << u << endl;
    cout << "one-dimensional array     " << malpa_1d[1] << endl;
    cout << "two-dimensional array     " << malpa_2d[1][1] << endl;
    return 0;
}