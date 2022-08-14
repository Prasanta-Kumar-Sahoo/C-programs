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
        cout << endl;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 67};
    int arr2[] = {2, 5, 6, 7, 1};

    array A, B;
    A.assign(arr1);
    B.assign(arr2);
    cout << "1st array elements are: ";
    A.show();
    cout << "2nd array element are: ";
    B.show();

    A.change(B);
    cout << "After change the 2nd Array elements\n";
    B.show();
    return 0;
}
