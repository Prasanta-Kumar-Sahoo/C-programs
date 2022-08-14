#include <iostream>
#include <cstring>
using namespace std;

class student
{
private:
    char name[20], branch[10];
    int sem;

public:
    void assign(char a[], char b[], int c)
    {
        strcpy(name, a);
        strcpy(branch, b);
        sem = c;
    }

    void show()
    {
        cout << name << " " << branch << " " << sem << endl;
    }
    class mark
    {
    private:
        int ct1, ct2, ct3, ct4;

    public:
        void assign(int a, int b, int c, int d)
        {
            ct1 = a;
            ct2 = b;
            ct3 = c;
            ct4 = d;
        }
        void show()
        {
            int tot = ct1 + ct2 + ct3 + ct4;
            int avg = tot / 4;
            cout << "Total=" << tot << endl;
            cout << "average=" << avg << endl;
        }
    } mobj;
};

int main()
{
    student sobj;
    sobj.assign("prasanta", "CSEA", 7);
    sobj.mobj.assign(45, 56, 67, 34);
    sobj.show();
    sobj.mobj.show();
}
