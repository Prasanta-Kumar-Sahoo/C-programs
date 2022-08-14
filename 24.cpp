// DEFAULT CONSTRUCTOR

#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    number()
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
    number A, B, C;
    A.show();
    B.show();
    C.show();
    return 0;
}