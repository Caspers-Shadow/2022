#include <iostream>

using namespace std;

int main()
{
    int x = 25;            //Int Variable
    int *ptr = nullptr;    // Pointer variable, can oint to an int

    ptr = &x;              // Store the address of x in ptr

    // Use both x and ptr to display the value in x
    cout << "Here is the value in x, printed twice:\n" << endl;
    cout << x << endl;
    cout << *ptr << endl;

    // Assign 100 to the location pointed to by ptr. This
    // will actually assign 100 to x
    *ptr = 100;

    // Use both x and ptr to display the value in x
    cout << "\n\nOnce again, here is the value in x:\n" << endl;
    cout << x << endl;
    cout << *ptr << endl;

    return 0;
}
