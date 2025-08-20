#include <iostream>
#include <random>

using namespace std;

void inputDislay (int *arrRandom[])
{
    for(int i = 0; i < 10; i++)
    {
        *(arrRandom + i) = (1,101);
    }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
