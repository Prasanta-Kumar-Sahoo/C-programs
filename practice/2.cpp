#include <iostream>
using namespace std;
void main()
{
    float r;
    r = biggest();
    cout << "biggest=" << r;
}
float biggest()
{
    float a, b, c, d;
    cout << "Enter three numbers...";
    cin >> a >> b >> c;
    d = (a > b & a > c) ?
}