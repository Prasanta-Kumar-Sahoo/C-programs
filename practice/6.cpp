#include <iostream>
using namespace std;

class pointer
{
private:
    int *n;

public:
    void assign(int *);
    void show();
}

void
pointer::assign(int b[])
{
    a = new int[6];
    for (int i = 0; i < 6; i++)
    {
        a[i] = b[i];
    }
}
