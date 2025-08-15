//Mariska Adriaanzen
//43054226
//Practical 6A
#include <iostream>

using namespace std;

int main()
{
    // Declaring variables and ptrs
    int num1, num2;
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    // Input
    cout << "Enter 2 integer values to swap in memory" << endl;

    cout << "Value number 1: ";
    cin >> num1;

    cout << "Value number 2: ";
    cin >> num2;

    // Assigning ptrs
    ptr1 = &num1;
    ptr2 = &num2;

    // Original values as in ptrs
    cout << "\nValue1 is stored at memory location " << ptr1 << " and has a value of " << *ptr1 << endl;
    cout << "Value2 is stored at memory location " << ptr2 << " and has a value of " << *ptr2 << endl;

    cout << "\n\nSwapping values...\n\n";

    // Swapping ptr values
    int lorrie = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = lorrie;


    // Swapped value output
    cout << "\nValue1 is stored at memory location " << ptr1 << " and has a value of " << *ptr1 << endl;
    cout << "Value2 is stored at memory location " << ptr2 << " and has a value of " << *ptr2 << endl;

    return 0;
}
