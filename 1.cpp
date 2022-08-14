#include <iostream>
using namespace std;

int main()
{
    char name[15];
    int roll, avg, total = 0;
    int sub[6];
    cout << "name=" << endl;
    cin >> name;
    cout << "Roll:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "subject-" << i << ":" << endl;
        cin >> sub[i];
    }

    for (int i = 0; i < 7; i++)
    {
        total = total + sub[i];
    }

    avg = total / 6;

    cout << "Total Mark=" << total << endl;
    cout << "Average Mark=" << avg << endl;
}