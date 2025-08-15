//Mariska Adriaanzen
//43054226

#include <iostream>

using namespace std;

int main()
{
    //Variables
    int i, tel = 0;

    string email, namesur, name, sur, nuweNaam;
    string arrNames[100];

    //Input
    cout << "Enter an email address in the format name.surname@domain.com (X to stop): " ;
    cin >> email;

    //Loop that checkes if the user wants to stop
    while ((email != "X") && (email != "x"))
    {
        i = email.find('@');
        namesur = email.substr(0,i);

        i = namesur.find('.');
        name = namesur.substr(0,i);
        sur = namesur.substr(i+1,namesur.length());

        nuweNaam = name + " " + sur;

        arrNames[tel] = {nuweNaam};
        tel++;

        cout << "Enter an email address in the format name.surname@domain.com (X to stop): " ;
        cin >> email;

    }


    //Output
    cout << "\n\nList of names: \n";

    for (int j = 0; j < tel; j++)
    {
        cout << j+1 << ".  "<< arrNames[j] << endl;
    }







    return 0;
}
