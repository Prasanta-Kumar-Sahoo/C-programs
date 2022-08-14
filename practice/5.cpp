#include <iostream>

using namespace std;
class matrix
{
private:
    int a[2][3];

public:
    void assign(int[][3]);
    void show();
};

void matrix::assign(int b[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = b[i][j];
        }
    }
}

void matrix::show()
{
    {
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\t" << endl;
    }
}

int main()
{
    int mat[][3] = {{1, 4, 3}, {7, 66, 77}};
    matrix obj;
    obj.assign(mat);
    obj.show();
}