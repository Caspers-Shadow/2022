//Mariska Adriaanzen
//43054226
//Practical 6A
#include <iostream>

using namespace std;

int main()
{
    //Pointer and variable declaration
    int i = 600;
    int *ptrI = nullptr;

    ptrI = &i;

    double d = 76.3;
    double *ptrD = nullptr;

    ptrD = &d;

    char c = 'M';
    char *ptrC = nullptr;

    ptrC = &c;

    //Output
    cout << "The address of char is: " << (void*)ptrC << endl;
    cout << "The address of integer is: " << ptrI << endl;
    cout << "The address of double is: " << ptrD << endl;

    cout << "\nThe address of char* is: " << &ptrC << endl;
    cout << "The address of integer* is: " << &ptrI << endl;
    cout << "The address of double* is: " << &ptrD << endl;

    cout << "\nThe value of char is: " << c << endl;
    cout << "The value of integer is: " << i << endl;
    cout << "The value of double is: " << d << endl;

    cout << "\n============================================\n\n" ;

    cout << "\nThe value of char* is: " << *ptrC << endl;
    cout << "The value of integer* is: " << *ptrI << endl;
    cout << "The value of double* is: " << *ptrD << endl;

    cout << "\nThe size of char is: " << sizeof(c) << endl;
    cout << "The size of integer is: " << sizeof(i) << endl;
    cout << "The size of double is: " << sizeof(d) << endl;

    cout << "\nThe size of char* is: " << sizeof(ptrC) << endl;
    cout << "The size of integer* is: " << sizeof(ptrI) << endl;
    cout << "The size of double* is: " << sizeof(ptrD) << endl;

    return 0;
}
