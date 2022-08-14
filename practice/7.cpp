#include <iostream>
using namespace std;
class matrix
{
private:
    int a[10][10], b[10][10], m, n, i, j, k;

public:
    void read();
    void display();
    void multiply(matrix, matrix);
};

void matrix::read()
{
    cout << "enter the size of row: " << endl;
    cin >> m;
    cout << "enter the size of colomn: " << endl;
    cin >> n;
}

void matrix::display()
{
    cout << "your entered matrix is: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

void matrix::multiply(matrix m1, matrix m2)
{
    cout << "multiplication of two matrix is: " << endl;
    for (i = 0; i < m1.m; i++)
    {
        for (j = 0; j < m1.n; j++)
        {
            for (k = 0; k < m2.n; k++)
            {
            }
        }
    }
}