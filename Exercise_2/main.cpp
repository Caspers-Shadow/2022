//Mariska adriaanzen
//43054226

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of x: ";
    cin >> y;

    if(x == y)
    {
        cout << "\n\nx is equal to y";
        return 0;
    }

    if(x < y)
    {
        cout << "\n\nx is less then y";
        return 0;
    }

    if(x > y)
    {
        cout << "\n\nx is greater then y";
        return 0;
    }

    return 0;
}
