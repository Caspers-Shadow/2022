#include <iostream>
#include <fstream>

using namespace std;

int readFromFile(string arrNames[])
{
    ifstream infile;
    int count = 0;

    infile.open("Names.txt");

    if (infile.fail())
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        while (!infile.eof())
        {
            infile >> arrNames[count];
            count++;
        }

        infile.close();
    }

    return count;
}

void displayNames(string arrNames[], int count)
{
    cout << "List of names\n" << endl;

    for (int i = 0; i < count ; i++)
    {
        cout << arrNames[i] << endl;
    }
}

int main()
{
    const int SIZE = 10;
    string arrNames[SIZE];

    int count = readFromFile(arrNames);
    displayNames(arrNames,count);

    return 0;
}
