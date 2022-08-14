// parameterized constructor

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

number ::number(int b)
{
    a = b;
}

int main()
{
    number a(6);
    number b = number(7);
    a.show();
    b.show();
}
