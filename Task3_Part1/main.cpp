#include <iostream>

using namespace std;

int main()
{
    // Part 1

    string depart, dest ;
    float oneTicket ;
    int booked ;

    cout << "Enter the place of departure: " ;
    cin >> depart ;

    cout << "Enter the destination: " ;
    cin >> dest ;

    cout << "Enter the price of one ticket: " ;
    cin >> oneTicket ;

    cout << "Enter the number of tickets booked: " ;
    cin >> booked ;

    cout << "\n\nA booking was made for " << booked <<" tickets\n ";
    cout << "From "<<depart<<" to "<<dest<<"\n";
    cout <<"Total amount : R "<<oneTicket*booked;

    return 0;
}
