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
        cout << "A=" << a << endl;
    }
};

int main()
{
    Number A, B(6);
    Number c = Number(7);
    Number D = 7;
    A.show();
    B.show();
    c.show();
    D.show();
    return 0;
}