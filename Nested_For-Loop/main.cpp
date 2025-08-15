#include <iostream>

using namespace std;

int main()
{
    int num1, num2,j,i;
    string ster;

    cout << "Num 1: ";
    cin >> num1;

    cout << "Num 2: ";
    cin >> num2;

    for (i = 1;i <=num1; i ++)
    {
        for(j = 1;j<=num2; j++)
        {
            ster += "* ";

        }
        cout << ster << endl;
    }
    return 0;
}
