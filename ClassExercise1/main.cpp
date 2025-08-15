#include <iostream>

using namespace std;

int main()
{
    int num;
    int total = 0;

    cout << "Enter a number : " ;
    cin >> num;

    while (num >= 0)
    {
        int total = total + num;

        cout <<"\n\n" <<total;

        cout << "\nEnter a number : " ;
        cin >> num;
    }

    return 0;
}
