//CustomerAcc_Adriaanzen_Mariska_43054226

#include <iomanip>
#include <iostream>

using namespace std;

//Structure
struct Customer
{
    int accNum;
    string surname;
    int year;
    double amount;
} customer1; //Declared customer1

//====================================================================

//getInfo function
Customer getInfo ()
{
    Customer tempCustomer;

    cout << "Enter the account number: ";
    cin >> customer1.accNum;

    cout << "Enter the surname: ";
    cin >> customer1.surname;

    cout << "Enter the year the account was opened: ";
    cin >> customer1.year;

    cout << "Enter the balance: ";
    cin >> customer1.amount;

    return tempCustomer;
}

//====================================================================

//displayData function
void displayData (struct Customer)
{
   //Output
   cout << "\nThe customers details are:\n============================\n\n";
   cout << "Account number: " << customer1.accNum << endl;
   cout << "Surname: " << customer1.surname << endl;
   cout << "Year: " << customer1.year << endl;
   cout << fixed << setprecision(2);
   cout << "Balance: R " << customer1.amount << endl;
}

//====================================================================

//Main function
int main()
{
    Customer customer;

    //Variables
    double interest, total;

    //Getting information and displaying the data
    customer = getInfo();

    displayData(customer1);

    //Interest and total
    interest = (2022-customer1.year)*(customer1.amount*0.02);
    total = interest + customer1.amount;

    cout << fixed << setprecision(2);
    cout << "Interest amount: R " << interest << endl;
    cout << "Total amount: R " << total << endl;

    return 0;
}
