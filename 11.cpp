#include <iostream>
using namespace std;

class TwoNumberSum
{
private:
    float a, b;

public:
    void assign(float, float);
    void sum();
};

inline void TwoNumberSum::assign(float m, float n)
{
    a = m;
    b = n;
}
inline void TwoNumberSum::sum()
{
    float c = a + b;
    cout << "sum of " << a << " and " << b << " is " << c << endl;
}

int main()
{
    // float a,b;
    TwoNumberSum N;
    N.assign(45, 89.68);
    N.sum();
}