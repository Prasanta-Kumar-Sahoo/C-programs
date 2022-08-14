#include <iostream>
using namespace std;
class ARS
{
    int a[8][9], m, n;

public:
    ARS(int m, int n)
    {

        cout << "enter the element of " << m << "X" << n << "matrix" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    friend void add(ARS &, ARS &);

    void show()
    {
        cout << "the matrix is:" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};
void add(ARS &obj1, ARS &obj2)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = obj.a[i][j] + obj2.a[i][j];
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter the row: ";
    cin >> m;
    cout << "Enter the column: ";
    cin >> n;

    ARS M1(m, n);
    ARS M2(m, n);
    M1.show();
    M2.show();
    M1.show();

    return 0;
}