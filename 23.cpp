#include <iostream>
using namespace std;
class array
{
private:
    int arr[6];

public:
    void read();
    void show();
    friend array sum(array, array);
};

void array::read()
{
    cout << "enter the elements in the array: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
}

void array::show()
{
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

array sum(array obj1, array obj2)
{

    array o3;
    for (int i = 0; i < 6; i++)
    {
        o3.arr[i] = obj1.arr[i] + obj2.arr[i];
    }
    return o3;
}
int main()
{
    array o1, o2;
    o1.read();
    o1.show();
    o2.read();
    o2.show();
    array o3 = sum(o1, o2);
    o3.show();
    return 0;
}