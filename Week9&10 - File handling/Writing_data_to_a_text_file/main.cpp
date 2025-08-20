#include <iostream>
#include <fstream>                                  //NB!!!!!!!!!!!!!!!!!!!!

using namespace std;

int main()
{
    ofstream outputFile;                             // NB!!!!!!!!!!!!!!!!!!
    outputFile.open("Demofile.txt");

    cout << "Now writing data into the file" << endl;

    // Write four names to the file
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Close file
    outputFile.close();
    cout << "Done.\n";

    return 0;
}
