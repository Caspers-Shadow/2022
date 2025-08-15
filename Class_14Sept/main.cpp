#include <iostream>

using namespace std;

int main()
{
    int num = 20;

    cout << "Value of number:\t" << num << endl;
    cout << "Address of number:\t" << &num << endl;

    int *ptr = nullptr;

    ptr = &num;

    cout << "\nValue of number:\t" << *ptr << endl;
    cout << "Address of number:\t" << &*ptr << endl;

    int *ptr2 = nullptr;

    ptr2 = ptr;

    cout << "\nValue of number 2:\t" << *ptr2 << endl;
    cout << "Address of number 2:\t" << &*ptr2 << endl;

    cout << "\n\n=========================================" << endl;
    cout << "Now we change the value to 500:" << endl;
    cout << "=========================================\n\n\n" ;

    *ptr2 = 500;

    cout << "Value of number:\t" << num << endl;
    cout << "Address of number:\t" << &num << endl;

    cout << "\nValue of number:\t" << *ptr << endl;
    cout << "Address of number:\t" << &*ptr << endl;

    cout << "\nValue of number 2:\t" << *ptr2 << endl;
    cout << "Address of number 2:\t" << &*ptr2 << endl;

    return 0;
}
