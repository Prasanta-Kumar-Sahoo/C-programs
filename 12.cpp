// Single dimension array as data member in a class

#include <iostream>
using namespace std;

class array
{
private:
    int a[7];

public:
    void assign(int[]);
    void show();
};

void array::assign(int b[])
{
    for (int i = 0; i < 7; i++)
    {
        a[i] = b[i];
    }
}

void array::show()
{
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << endl;
        sum = sum + a[i];
    }
    cout << "Total sum is " << sum << endl;
}

int main()
{
    int s[] = {3, 4, 6, 7, 8, 9, 12};
    array p;
    p.assign(s);
    p.show();
    return 0;
}
