#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int b)
    {
        a = b;
    }
    void show()
    {
        cout << "A =" << a << endl;
    }
};

int main()
{
    Number A;
    Number B(6);
    Number C = Number(7);
    Number D = 67;

    A.show();
    B.show();
    C.show();
    D.show();
}