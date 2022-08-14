#include <iostream>

using namespace std;

class Number
{
private:
    int a;

public:
    Number() // constructor declaration
    {
        a = 0;
    }
    void show()
    {
        cout << "A=" << a << endl;
    }
};
int main()
{
    Number A, B, C;
    A.show();
    B.show();
    C.show();

    return 0;
}