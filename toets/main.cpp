#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    //char arrNames[][2];
    char arrEmail[1];
    string email, nameSur;

    cout << "Enter an email address in the format name.surname@domain.com (X to stop): " ;
    cin >> email;

    while (email[0] != 'X')
    {
        for (int i = 0; i <= email.length();i++)
        {
            while (email[i] != '@')
            {
                nameSur =+ email[i];
                cout << nameSur;
                i++;
            }

        }
    }






    return 0;
}
