//Practical_8a_43054226
#include <iostream>

using namespace std;

int main()
{
    int SIZE ;

    cout << "How many elements should be stored in the array?  ";
    cin >> SIZE ;

    int arrElements[SIZE];
    int *arrPtr;

    arrPtr = arrElements;

    for(int count = 0; count < SIZE; count++)
    {
        cout << "Enter value for element at index " << count << ":  ";
        cin >> arrPtr[count];
    }

    //Sorting
    int lorrie;

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = i+1; j < SIZE; j++)
        {
            if(arrPtr[j] < arrPtr[i])
            {
                lorrie = arrPtr[i];
                arrPtr[i] = arrPtr[j];
                arrPtr[j] = lorrie;

            }
        }

    }

    // Sorted array output
    cout << "\nSorted array:  ";
    for(int count = 0; count < SIZE; count++)
    {
        cout << arrPtr[count] << " ";
    }

    return 0;
}
