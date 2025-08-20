#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    int numberOfDay;
    double sales;

    cout << "For how many days do you have sales? " ;
    cin >> numberOfDay;

    outputFile.open("Sales.txt");

    for (int i = 1; i <= numberOfDay; i++)
    {
        cout << "Enter sales for the day " << i << ": ";
        cin >> sales;

        outputFile << sales << endl;
    }

    outputFile.close();

    cout << "\nData written to Sales.txt";

    return 0;
}
