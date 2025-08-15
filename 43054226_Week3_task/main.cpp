//Mariska Adriaanzen
//43054226

#include <iostream>

using namespace std;

int main()
{
    //Variables
    double KM5_FEE = 65, KM10_FEE = 100, KM15_FEE = 150, total=0, t5=0 ,t10=0 ,t15=0;
    string YN;
    int cat, i5 =0, i10=0, i15=0, tel=0;
    string groot;

    //Input
    cout << "Do you want to register a participant (Y or N): ";
    cin >> YN;

    //While for repetition
    while(YN == "Y")
    {
        cout << "\nCategories:\n\t1. 5 kilometers:\n\t2. 10 kilometers:\n\t3. 15 kilometers";
        cout << "Your choice (1/2/3): ";
        cin >> cat;

        //Switch for categories
        switch(cat)
        {
        case 1 :
            {
                t5 += KM5_FEE;
                i5 +=1;
                total += KM5_FEE;
                tel +=1;
                break;
            }
        case 2 :
            {
                t10 += KM10_FEE;
                i10 +=1;
                total += KM10_FEE;
                tel +=1;
                break;
            }
        case 3 :
            {
                t15 += KM15_FEE;
                i15 +=1;
                total += KM15_FEE;
                tel +=1;
                break;

            }
        default :
            {
                cout << "Enter a valid number!";
                break;
            }

        }

        cout << "\n\nDo you want to register another participant (Y or N): ";
        cin >> YN;
    }

    //if's for calculating the biggest income
    if ((t5 > t10) && (t5 > t15))
    {
        groot = "5km";
    }
    if ((t10 > t5) && (t10 > t15))
    {
        groot = "10km";
    }
    if ((t15 > t5) && (t15 > t10))
    {
        groot = "15km";
    }

    //Output
    cout << "\nCategory   Num athletes   Income" << endl;
    cout << "5km       " << i5 << "        R " << t5 << endl;
    cout << "10km       " << i10 << "        R " << t10 << endl;
    cout << "15km       " << i15 << "        R " << t15 << endl;

    cout << "\n\nTotal number of particiants: " << tel << endl;
    cout << "Total income: "<< total << endl;
    cout << "Category with highest income: " << groot << endl ;




    return 0;
}
