// FRIEND FUNCTION

#include <iostream>
using namespace std;

class NumberAdd
{
    float a, b;

public:
    void read()
    {
        cout << "enter two number:" << endl;
        cin >> a >> b;
    }
    friend float add(NumberAdd obj)
    {
        return obj.a + obj.b;
    }
};

int main()
{
    NumberAdd AB;
    AB.read();
    float res = add(AB);
    cout << "sum = " << res;

    return 0;
}