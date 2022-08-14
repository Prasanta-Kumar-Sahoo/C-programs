// constructor with default argument

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(int b = 0)
    {
        a = b;
    }
    void show()
    {
        cout << "A=" << a << endl;
    }
};

int main()
{
    Number A;
    Number B(7);
    Number C = Number();
    Number D = 67;
    A.show();
    B.show();
    C.show();
    D.show();
}