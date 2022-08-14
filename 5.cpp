#include <iostream>
using namespace std;

int main()
{
    int units, costNo;
    float charges;
    cout << "Enter costomer No. & unit consumed: " << endl;
    cin >> units >> costNo;
    if (units <= 200)
    {

        charges = 0.5 * units;
    }
    else if (units <= 200)
    {

        charges = 100 + 0.65 * (units - 200);
    }
    else if (units <= 400)
    {

        charges = 230 + 0.8 * (units - 400);
    }
    else
    {
        charges = 390 + (units - 600);
    }
    cout<<"\n Consumers No:"<<
    return 0;
}
