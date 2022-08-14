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

    class marks
    {
    private:
        int ct1, ct2, ct3;

    public:
        void assign(int a, int b, int c)
        {
            ct1 = a;
            ct2 = b;
            ct3 = c;
        }
        void show()
        {
            int tot = ct1 + ct2 + ct3;
            cout << "Internal Total=" << tot << endl;
        }
    } mobj;
};

int main()
{
    student sub;
    sub.assign("prasanta", "CSE", 7);
    sub.mobj.assign(30, 40, 50);
    sub.show();
    sub.mobj.show();
}