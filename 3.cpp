#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    float result;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "enter the second number: " << endl;
    cin >> b;
    cout << "Enter the third number: " << endl;
    cin >> c;
    result = a + b + c;
    cout << "the sum of three number is: " << result << endl;

    if (a = b = c)
    {
        cout << "NO repeated number allowed..";
    }
    return 0;
}