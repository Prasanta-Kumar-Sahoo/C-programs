#include <iostream>
using namespace std;

class student
{
private:
    char name[20], branch[10];

public:
    void assign()
    {
        cout << "NAME :";
        cin >> name;
        cout << "BRANCH :";
        cin >> branch;
    }
    void show()
    {
        cout << name << " " << branch << endl;
    }

    class mark
    {
    private:
        int s1, s2, s3, s4, s5, s6;

    public:
        void assign()
        {
            cout << "FIRST LANGUAGE :";
            cin >> s1;
            cout << "SECOND LANGUAGE :";
            cin >> s2;
            cout << "THIRD LANGUAGE :";
            cin >> s3;
            cout << "MATH :";
            cin >> s4;
            cout << "SCIENCE :";
            cin >> s5;
            cout << "SOCIAL SCIENCE :";
            cin >> s6;
        }

        void result()
        {
            int total = s1 + s2 + s3 + s4 + s5 + s6;
            int avg = total / 6;
            float percent = total / 600 * 100;
            cout << "---------------------------------------------------------------------" << endl;
            cout << "FIRST LANGUAGE-  " << s1 << "\nSECOND LANGUAGE-  " << s2 << "\nTHIRD LANGUAGE-  " << s3 << "\nMATH-  " << s4 << "\nSCIENCE-  "
                 << "\nSOCIAL SCIENCE-  " << s6 << endl;

            cout << "TOTAL MARK-  " << total << "\nAVERAGE-  " << avg;
        }
    } smark;
};

int main()
{
    student s[63];
    int n;
    cout << "enter  the student number: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the details of the student Roll-" << i + 1 << endl;
        s->assign();
        cout << "enter the marks:" << endl;
        s->smark.assign();
        s->show();
        s->smark.result();
    }
}