#include <iostream>

using namespace std;

class NumberAdd
{
    float a, b;

public:
    void read()
    {
        cout << "enter two number: " << endl;
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
    cout << "the sum is" << res;
    return 0;
}