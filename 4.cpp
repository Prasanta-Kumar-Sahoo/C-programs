#include <iostream>
using namespace std;

int main()
{
    int a, b, c, largest;
    cout << "enter the three number..\n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else
    {
        if (c > b)
        {
            largest = c;
        }
        else
        {
            largest = b;
        }
    }
    cout << "the largest number is " << largest << endl;
    return 0;
}