#include <iostream>
using namespace std;

class NumberAdd
{
private:
    float a, b;

public:
    void read();
    void show();
    friend float add(NumberAdd obj)
    {
        return obj.a + obj.b;
    }
};
void NumberAdd::read()
{
    cout << "enter the first number: " << endl;
    cin >> a;
    cout << "enter the second number: " << endl;
    cin >> b;
}
int main()
{
    NumberAdd AB;
    AB.read();
    float sum = add(AB);
    cout << "sum = " << sum << endl;
}
