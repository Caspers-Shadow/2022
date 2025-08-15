#include <iostream>

using namespace std;

void displayMenu()
{
   cout << "==========================================" << endl;
   cout << "\tMENU" << endl;
   cout << "==========================================" << endl;

   cout << "\t1.Add" << endl;
   cout << "\t2.Subtract" << endl;
   cout << "\t3.Multiply" << endl;
   cout << "\t4.Divide" << endl;
   cout << "\t5.Modulus" << endl;
   cout << "==========================================" << endl;
}

void Add(int num1, int num2)
{
    cout << "\nResult : " << num1+num2;
}

void Subtract(int num1, int num2)
{
    cout << "\nResult : " << num1-num2;
}

void Multiply(int num1, int num2)
{
    cout << "\nResult : " << num1*num2;
}

void Divide(int num1, int num2)
{
    cout << "\nResult : " << num1/num2;
}

void Modulus(int num1, int num2)
{
    cout << "\nResult : " << num1%num2;
}

int main()
{
    int choice, num1, num2;
    char yn = 'y';

    while((yn != 'n') && (yn != 'n'))
    {
        displayMenu();

        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cout << "Enter integer number 1: ";
        cin >> num1;

        cout << "Enter integer number 2: ";
        cin >> num2;

        if (choice == 1)
        {
            Add(num1,num2);
        }
        else if (choice == 2)
        {
            Subtract(num1,num2);
        }
        else if (choice == 3)
        {
            Multiply(num1,num2);
        }
        else if (choice == 4)
        {
            Divide(num1,num2);
        }
        else if (choice == 5)
        {
            Modulus(num1,num2);
        }

        cout << "\nPress y or Y to continue : ";
        cin >> yn;

    }

    return 0;
}
