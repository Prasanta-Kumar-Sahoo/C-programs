#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;

public:
    void assign()
    {
        cout << "enter the real part of  complex number:";
        cin >> real;
        cout << "enter the imaginary part of the complex nunber:";
        cin >> img;
    }

    void sum(complex p, complex q)
    {
        real = p.real + q.real;
        img = p.img + q.img;
    }
    void show()
    {
        cout << real << " + i" << img << endl;
    }
};

int main()
{
    complex A, B, C;
    A.assign();
    B.assign();
    C.sum(A, B);
}