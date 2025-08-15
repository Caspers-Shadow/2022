#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int i, tel = 0;

    string email, namesur, name, sur, nuweNaam;
    string arrNames[100];

    cout << "Enter an email address in the format name.surname@domain.com (X to stop): " ;
    cin >> email;

    while ((email != "X") && (email != "x"))
    {
        i = email.find('@');
        namesur = email.substr(0,i);

        i = namesur.find('.');
        name = namesur.substr(0,i);
        sur = namesur.substr(i+1,namesur.length());

        nuweNaam = name + " " + sur;

    //cout << namesur << endl;

      //cout << sur << endl;

   //name = toupper(name[0]) + name[name.substr(1,name.length())];
   //cout << name << endl;

        arrNames[tel] = {nuweNaam};
        tel++;

        cout << "Enter an email address in the format name.surname@domain.com (X to stop): " ;
        cin >> email;

    }


    cout << "\n\nList of names: \n";

    for (int j = 0; j < tel; j++)
    {
        cout << j+1 << ".  "<< arrNames[j] << endl;
    }







    return 0;
}
