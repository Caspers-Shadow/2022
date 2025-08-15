#include <iostream>

using namespace std;

int main()
{
    int test1 = 0;
    int test2 = 0;

    cout<< "Enter the mark for test 1 (out of 20): ";
    cin>>test1;

    cout<< "Enter the mark for test 2 (out of 20): ";
    cin>>test2;

    double ave = (test1 + test2)/2.0;

    cout<<"Test 1 :"<< test1 << endl;
    cout<<"Test 2 :"<< test2 << endl;
    cout<<"Average :"<< ave << endl;

    return 0;
}
