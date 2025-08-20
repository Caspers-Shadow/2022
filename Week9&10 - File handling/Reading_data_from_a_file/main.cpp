#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    string name;
    int count = 1;

    infile.open("Names.txt");

    cout << "List of names" << endl;

    if (infile.fail())
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        while (!infile.eof())
        {
            infile >> name;
            cout << count << ". " << name << endl;
            count++;
        }

        infile.close();
    }

    return 0;
}
