#include <iostream>
using namespace std;

class pointer
{
private:
    int *a;

public:
    void assign(int *);
    void show();
};

void pointer::assign(int b[])
{
    a = new int[6];
    for (int i = 0; i < 6; i++)
    {
        a[i] = b[i];
    }
}

void pointer::show()
{
    cout << "All 6 numbers\n";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    pointer obj;
    int num[] = {3,
                 1,
                 4,
                 7,
                 66,
                 67};

    obj.assign(num);
    obj.show();
}