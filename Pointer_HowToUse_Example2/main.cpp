#include <iostream>

using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;   // Three int variables
    int *ptr = nullptr;           // Pointer variable

    // Dislay the contents of x, y, and z
    cout << "Here are the values of x, y, and z:" << endl;
    cout << x << " " << y << " " << z << endl;

    // Use pointer to manipulate x, y, and z

    ptr = &x;       //Store the address of x in ptr
    *ptr += 100;    // Add 100 to the value of x

    ptr = &y;       //Store the address of y in ptr
    *ptr += 100;    // Add 100 to the value of y

    ptr = &z;       //Store the address of z in ptr
    *ptr += 100;    // Add 100 to the value of z

    // Display the contents of x, y, and z

    cout << "Once again here are the values of x, y, and z:" << endl;
    cout << x << " " << y << " " << z << endl;

    return 0;
}
