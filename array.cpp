#include <iostream>
#include <iomanip>
using namespace std;
class employee
{
private:
    char n[20], d[15];
    int age;
    float sal;

public:
    void read()
    {
        cin >> n >> d >> age >> sal;
    }
    void show()
    {
        cout << setw(20) << n << setw(15) << d << setw(5) << age << setw(7) << sal << endl;
    }
};

int main()
{
    employee emp[50];
    int n;
    cout << "How many employee details to be input ?";
    for (int i = 0; i < n; i++)
    {
        cout << "enter employee" << i + 1 << "Name,designation,Age, and Salary:" << endl;
        emp[i].read();
    }

    cout << setw(20) << "Name" << setw(15) << "Designation" << setw(5) << "Age" << setw(7) << "Salary" << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].show();
    }
}
