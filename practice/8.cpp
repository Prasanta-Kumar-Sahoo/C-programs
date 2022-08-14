#include <iostream>
using namespace std;

class student
{
private:
    int a, b, c;

public:
    void read();
    friend int sum(student);
};

int sum(student pk)
{
    return pk.a + pk.b;
}
int main()
{
    student boy;
    boy.read();
    int total_sum = sum(boy);
    cout << "the sum of boy =" << total_sum << endl;
}
void student::read()
{
    cout << "enter the total boys in class (ix)" << endl;
    cin >> a;
    cout << "enter the total boys in class (x)" << endl;
    cin >> b;
}
