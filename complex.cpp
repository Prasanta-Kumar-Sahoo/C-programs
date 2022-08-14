#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void assign(int a, int b)
    {
        real = a;
        img = b;
    }
    void show()
    {
        cout << real << "+i" << img << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.assign(4, 7);
    c2.assign(89, 9);
    c3.assign(548, 95);
    c1.show();
    c2.show();
    c3.show();
}
