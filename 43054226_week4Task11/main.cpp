//Mariska Adriaanzen
//43054226

#include <iostream>

using namespace std;

//displayMarks function start
void displayMarks (int arrMarks[10], int numCount)
{
    //Varisbles
    int highest = 0;
    int lowest = 100;

    cout << "List of Marks:" << endl;

    for (int i = 0 ; i < numCount; i++)
    {
        //Sorting
        cout << (i+1) << ". " << arrMarks[i] << endl;

        //Highest and lowest calculations
        if(arrMarks[i] > highest)
        {
            highest = arrMarks[i];
        }

        if(arrMarks[i] < lowest)
        {
            lowest = arrMarks[i];
        }
    }

    //Output
    cout << "\n\nThe highest mark in the array is: " << highest << endl;
    cout << "The lowest mark in the array is: " << lowest << endl;

}
//displayMarks function end

//=================================================================================================

//main function start
int main()
{
    //Variables
    int arrMarks[] = {23,30,76,75,60,89,12,44,55,65};
    int choose, fix, nuut, numCount = 10 ;

    //Calling function
    displayMarks(arrMarks,numCount);

    cout << "\n\nSelect the following to Remove or Replace a mark" << endl;
    cout << "Remove Mark (1) or Replace Mark (2): ";
    cin >> choose;

    //Removal of a mark
    if (choose == 1)
    {
        cout << "\nWhich number from the list do you want to remove? ";
        cin >> fix;

        for (int j = fix-1; j < numCount - 1 ; j++)
        {
            arrMarks[j] = arrMarks[j +1];
        }

        numCount--;
    }

    //Replacement of a mark
    if (choose == 2)
    {
        cout << "\nChoose a mark from the list to change: ";
        cin >> fix;

        cout << "Enter the new mark for number 10: ";
        cin >> nuut;

        arrMarks[fix - 1] = nuut;
    }

    //Output
    displayMarks(arrMarks,numCount);


    return 0;
}
