#include <iostream>
using namespace std;

class array
{
    int p[2][3];

public:
    void assign(int b[][3]);
    void sum(int m[][3], int n[][3]);
    void show();
};

void array::assign(int b[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
}

void array::show()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << p[i][j];
        }
        cout << endl;
    }
}

void array::sum(int m[2][3], int n[2][3])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p[i][j] = m[i][j] + n[i][j];
        }
    }
}

int main()
{
    int r[2][3];
    array A;
    cout << "enyer the numbers in the array:" << endl;
    A.assign(r);
    A.show();
}