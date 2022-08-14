#include <iostream>
using namespace std;
class matrix
{
private:
    int arr[2][3];

public:
    void assign()
    {

        for (int i = 0; i < 2; i++)
        {
            cout << "enter the element in row-" << i + 1;
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void show()
    {
        cout << "the matrix is" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    void sum(matrix, matrix);
    void sub(matrix, matrix);
};

void matrix::sum(matrix A, matrix B)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = A.arr[i][j] + B.arr[i][j];
        }
    }
}

int main()
{
    matrix A, B, C, D;
    A.assign();
    B.assign();
    C.sum(A, B);
    D.sub(A, B);
    cout << "the first matrix is" << endl;
    A.show();
    cout << "the second matrix is" << endl;
    B.show();

    cout << "the sum of the two matrix is" << endl;
    C.show();
    cout << "the substraction of the two matrix is" << endl;
    D.show();
}
