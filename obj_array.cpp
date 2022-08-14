#include <iostream>
using namespace std;
class matrix
{
private:
    int a[8][9], m, n;

public:
    void assign()
    {
        cout << "enter the size of row: " << endl;
        cin >> m;
        cout << "enter the siz column: " << endl;
        cin >> n;
        cout << "add elements in the matrix: " << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void read()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    void sub(matrix A, matrix B)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                A.a[i][j] - B.a[i][j];
            }
        }
    }
    friend matrix sum(matrix A, matrix B);
};

matrix sum(matrix A, matrix B)
{
    int i, j;

    for (i = 0; i < A.m; i++)
    {
        for (j = 0; j < A.n; j++)
        {
            A.a[i][j] = A.a[i][j] + B.a[i][j];
        }
    }
    return A;
}

int main()
{
    matrix M1, M2, M3;

    M1.assign();
    M1.read();
    M2.assign();
    M2.read();
    M3 = sum(M1, M2);
    M3.read();
    // cout << "the sum of two matrix is:" << c << endl;
}
