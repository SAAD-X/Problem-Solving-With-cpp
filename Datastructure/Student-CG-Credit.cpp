#include <iostream>
using namespace std;

struct student
{
    int UID;
    int s;
    int C;
    float CG;
} s[3];

int main()
{
    cout << "Enter information of students: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        s[i].s = i + 1;
        cout << "For Student " << s[i].s << "," << endl;

        cout << "Enter Unique ID: ";
        cin >> s[i].UID;

        cout << "Enter Credit Complete: ";
        cin >> s[i].C;

        cout << "Enter CGPA: ";
        cin >> s[i].CG;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        if (s[i].CG > 3.75 || s[i].C > 50)
        {
            cout << "\nStudent number: " << i + 1 << endl;
            cout << "Unique ID: " << s[i].UID << endl;
            cout << "Credit: " << s[i].C << endl;
            cout << "Marks: " << s[i].CG << endl;
        }
    }

    return 0;
}