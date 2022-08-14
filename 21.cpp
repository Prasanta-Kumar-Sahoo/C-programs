#include <iostream>
using namespace std;

class array
{
private:
    int a[5];

public:
    void assign(int[]);
    void show();
    void change(array *);
};

void array::assign(int b[])
{
    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }
}

void array::show()
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void array::change(array *obj)
{
    for (int i = 0; i < 5; i++)
    {
        obj->a[i] = obj->a[i] + a[i];
    }
}

int main()
{
    int arr1[] = {45, 2, 34, 65, 76};
    int arr2[] = {21, 34, 56, 76, 87};
    array A, B;
    A.assign(arr1);
    B.assign(arr2);
    cout << "the first array is:" << endl;
    A.show();
    cout << "the second array is:" << endl;
    B.show();
    A.change(&B);
    cout << "the newly changed array is: " << endl;
    B.show();
}