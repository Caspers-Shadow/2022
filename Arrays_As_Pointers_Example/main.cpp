#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;  // Size of the array
    int numbers[SIZE];   // Array of int
    int count;           // Counter variable

    // Get values to store in the array.
    // Use pointer notation instead of subscripts.

    cout << "Enter " << SIZE << " numbers: " << endl;

    for(count = 0; count < SIZE; count++)
    {
        cin >> *(numbers +count);
    }

    // Display the values in the array
    // Use pointer notation instead of subscripts.

    cout << "\nHere are the numbers you entered: " << endl;

    for(count = 0; count < SIZE; count++)
    {
        cout << *(numbers +count) << " ";
    }

    return 0;
}
