#include <iostream>
using namespace std;

class dynamic
{
    int *a;

public:
    dynamic()
    {
        a = new int[5];
    }
    void get();
    void show();
};

void dynamic::get()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "enter a number :\n";
        cin >> a[i];
    }
}

void dynamic::show()
{
    cout << "All 5 number of array:";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "";
    }
    delete a;
}

int main()
{
    int n;
    cout << "enter the size of the array:" << endl;
    cin >> n;
    dynamic A;
    A.get();
    A.show();
}