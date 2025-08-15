//Mariska adriaanzen
//43054226

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pi = 3.14159, rad;

    cout << "Enter the radius: ";
    cin >> rad;

    cout << "\n1. The radius: " << rad;
    cout << "\n2. The diameter: " << 2*rad;
    cout << "\n3. The circumference: " << 2*pi*rad;
    cout << "\n4. The area: " << pi*pow(rad,2);


    return 0;


}
