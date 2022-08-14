#include <iostream>
using namespace std;
class Table
{
private:
    int num;

public:
    void assign(int n)
    {
        num = n;
    }
    void shoowTable();
};

void Table::shoowTable()
{
    for (int i = 1; i <= 10; i++)
    {
        int res = num * i;
        cout << num << " X " << i << "=" << res << endl;
    }
}
int main()
{
    int num;
    Table T;
    cout << "enter the nuber of table: " << endl;
    cin >> num;
    T.assign(num);
    T.shoowTable();
    return 0;
}