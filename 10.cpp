#include <iostream>
using namespace std;

class matrix
{
private:
    int mat[5][5], m, n;

public:
    void read(int m, int n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                cin >> mat[i][j];
            }
        }
    }
    void show()
    {
        cout << "the matrix is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j];
            }
        }
    }

    void result(matrix a, matrix b)
    {
        cout << "the sum of two matrix is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
            }
        }
    }
};