#include <iostream>
#include <iomanip>

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

    //cout << "\n\nA booking was made for " << booked <<" tickets\n ";
    //cout << "From "<<depart<<" to "<<dest<<"\n";
    //cout <<"Total amount : R "<<oneTicket*booked;

    cout <<"Place of departure: "<< setw(14)<< depart;
    cout <<"\nDestination: "<< setw(14)<< dest;
    cout <<"\nNumber of tickets: "<< setw(14)<< booked;
    cout <<"\nPrice per ticket: "<<right<< setw(13)<<"R "<<left<<setw(11) << oneTicket;
    cout <<"\nTotal amount: "<<right<< setw(13)<<"R "<<left <<setw(11) << oneTicket*booked;


    return 0;
}
