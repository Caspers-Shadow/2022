//Mariska Adriaanzen
//43054226

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//Structure
struct Restaurant
{
    char name[30];
    int food;
    int service;
}; Restaurant arrStruct[100];

void displayData(Restaurant arrStruct[], int tel)
{
    cout << "\n " << setw(8) << "Name" << setw(8) << "Food" << setw(8) << "Service" << endl;

    for (int i =0; i < tel; i++)
    {
        cout <<  i+1 << "\t" << arrStruct[i].name << "\t" << arrStruct[i].food << "\t" << arrStruct[i].service << endl;
    }
}

void displayBestRestaurant (Restaurant arrStruct[],int tel)
{
    double ave, best = 0;
    string naam;
    int kos;
    int diens;

    for (int i=0; i < tel; i++)
    {
       ave = (arrStruct[i].service + arrStruct[i].food)*0.5 ;

       if (ave > best)
       {
           naam = arrStruct[i].name;
           kos = arrStruct[i].food;
           diens = arrStruct[i].service;
           best = ave;
       }
    }

    cout << "\nThe best restaurant" << endl;
    cout << "Name: " << naam << endl;
    cout << "Food: " << kos << endl;
    cout << "Service: " << diens << endl;
    cout << "Average: " << fixed << setprecision(2) << best << endl;

}

int main()
{
    char choice;
    int  tel = 0;

    cout << "Do you want to enter the details for a restaurant (Y/N): " ;
    cin >> choice;

    while ((toupper(choice) != 'N'))
    {


        cout << "\nEnter the name of the restaurant: ";
        cin >> arrStruct[tel].name;

        cout << "Enter the food rating (out of 10): ";
        cin >> arrStruct[tel].food;

        cout << "Enter the service rating (out of 10): ";
        cin >> arrStruct[tel].service;

        tel++;

        cout << "\nDo you want to enter the details for another restaurant (Y/N): " ;
        cin >> choice;
    }

    displayData(arrStruct,tel);
    displayBestRestaurant(arrStruct,tel);

    //Update

    int update;

    cout << "\nEnter a number from the list to update: ";
    cin >> update;

    while (update > tel)
    {
        cout << "\nInvalid! ";
        cout << "\nEnter a number from the list to update: ";
        cin >> update;
    }

        cout << "\nName of restaurant: " << arrStruct[update-1].name ;

        cout <<"\nCurrent ratings:" << endl;

        cout << "\nFood : " << arrStruct[update-1].food << endl;
        cout << "Service: " << arrStruct[update-1].service << endl;

        cout << "\nEnter a new rating for food (out of 10): ";
        cin >> arrStruct[update-1].food;

        cout << "Enter a new rating for service (out of 10): ";
        cin >> arrStruct[update-1].service;

        displayData(arrStruct,tel);

    //Remove

    int deleted;

    cout << "\nEnter the number of restaurant to remove (-1 to stop): ";
    cin >> deleted;

    if (deleted > tel)
    {
        cout << "Invalid number!!\n";

        cout << "\nEnter the number of restaurant to remove(-1 to stop): ";
        cin >> deleted;
    }

    if (tel == 1 )
    {
        cout << "\nThe List only consists of 1 element and therefore you cannot delete anything!!\n ";
    }

    while ((deleted != -1) && (tel != 1 ))
    {
        for (int i = deleted; i < tel-1; i++)
        {
            arrStruct[i] = arrStruct[i+1];

        }
        tel--;
        displayData(arrStruct,tel);

        cout << "\nEnter the number of restaurant to remove(-1 to stop): ";
        cin >> deleted;

        if (tel == 1 )
    {
        cout << "\nThe List only consists of 1 element and therefore you cannot delete anything!!\n ";
    }
    }


    return 0;
}
