#include <iostream>
#include <conio.h>
using namespace std;
class matrix
{
    int a[10][10];
    int m, n;

public:
    void input();
    void output();
    void multiply(matrix, matrix);
};
void matrix::input()
{
    cout << "enter the row: ";
    cin >> m;
    cout << "enter the col: ";
    cin >> n;
    cout << "matrix "
         << "\t";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "elements of matrix "
                 << "[" << i + 1 << "]"
                 << "[" << j + 1 << "]";
            cin >> a[i][j];
        }
    }
}
void matrix::output()
{
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
    }
}
void matrix::multiply(matrix m1, matrix m2)
{
    if (m1.n != m2.m)
    {
        cout << "matrix multipication not possible..";
    }
    else
    {
        cout << "the multiplication of the martix are: ";
        for (int i = 0; i < m1.m; i++)
        {
            for (int j = 0; j < m2.n; j++)
            {
                a[i][j] = 0;
                for (int k = 0; k < m1.n; k++)
                {
                    a[i][j] = a[i][j] + (m1.a[i][k] * m2.a[k][j]);
                    m = m1.m;
                    n = m2.n;
                }
            }
        }
    }
}
int main()
{

    matrix m1, m2, m3;
    cout << "for first matrix.. " << endl;
    m1.input();
    cout << "for the second matrix: " << endl;
    m2.input();
    m3.multiply(m1, m2);
    m3.output();
    getch();
}