#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
private:
    char n[20], d[15];
    int age;
    float sal;

public:
    void Get()
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
    Employee emp[50];
    int n;
    cout << "How many employee details to be input ?";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter employee " << i + 1 << " Name, Designation, Age, and Salary : ";
        emp[i].Get();
    }
    cout << setw(20) << "Name" << setw(15) << "Designation" << setw(5);
    cout << "Age" << setw(7) << " Salary" << endl;
    for (int i = 0; i < n; i++)
        emp[i].show();

    return 0;
}