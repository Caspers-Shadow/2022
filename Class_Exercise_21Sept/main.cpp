#include <iostream>

using namespace std;

int main()
{
    const int TEL = 4;
    int arrI[TEL] = {1,2,3,4};
    int *ptr;
    int count;

    ptr = arrI;

    // Arr
    cout << "Display adress using arrays:" << endl;

    for(count = 0; count < TEL; count++)
    {
        cout << "&arr[" << count << "] = " << &arrI[count] << endl ;
    }


    // Ptrs
    cout << "\nDisplay adress using ptrs:" << endl;

    for(count = 0; count < TEL; count++)
    {
        cout << "ptr + " << count << " = " << ptr + count << endl ;
    }

    return 0;
}
