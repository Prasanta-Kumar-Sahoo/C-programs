#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "this is tutorial line ." << endl;
    cout << "enter your age ?";
    cin >> age;
    if (age < 18)
    {
        cout << "not allowed";
    }
    else if (age == 18)
    {
        cout << "try next year";
    }
    else
    {
        cout << "welcome to the party..";
    }
    return 0;
}