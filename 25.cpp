#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    number(int);
    void show()
    {
        cout << "A=" << a << endl;
    }
};

number::number(int b)
{
    a = b;
}

int main()
{
    number A(7);
    number B = number(70);
    A.show();
    B.show();
}