#include <iostream>

using namespace std;

void calculateSquare ()
{
    int  num;
    float sqr;

   cout << "Input the number you want squared: ";
   cin >> num;

   sqr = num*num;

   cout << "\nThe number squared is = " << sqr;
}

int main()
{
    calculateSquare();
    return 0;
}
