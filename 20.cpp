#include <iostream>
using namespace std;

class array
{
    int a[5];

public:
    void assign(int[]);
    void change(array &);
    void show();
};

void array::assign(int b[])
{
    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }
}

void array::change(array &obj)
{
    for (int i = 0; i < 5; i++)
    {
        obj.a[i] = obj.a[i] + a[i];
    }
}

void array::show()
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4, 5, 7, 43};
    array A, B;
    A.assign(arr1);
    B.assign(arr2);
    cout << "the elements in arr1:" << endl;
    A.show();
    cout << "the elements in arr2:" << endl;
    B.show();
    A.change(B);
    cout << "after the change in 2nd array elements\n";
    B.show();

    return 0;
}