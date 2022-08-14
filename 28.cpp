#include <iostream>
using namespace std;
class dynamic
{
    int *a, n;

public:
    dynamic(int b)
    {
        n = b;
        a = new int[n];
    }
    void get();
    void show();
};

void dynamic::get()
{
    for (int i = 0; i < n; i++)
    {

        cout << "enter number:" << endl;
        cin >> a[i];
    }
}
void dynamic::show()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    delete a;
}

int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    dynamic A(n);
    A.get();
    A.show();

    return 0;
}