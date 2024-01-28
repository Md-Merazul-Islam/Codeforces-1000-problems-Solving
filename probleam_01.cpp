#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(student a, student b)
{
    if (a.marks == b.marks)

        return a.roll < b.roll;

    else

        return (a.marks > b.marks);
}
int main()
{
    int n;
    cin >> n;

    student ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i].name;
        cin >> ary[i].roll;
        cin >> ary[i].marks;
        cin.ignore();
    }
    sort(ary, ary + n, cmp);
    for (int i = 0; i < n; i++)
    {

        cout << ary[i].name << " ";
        cout << ary[i].roll << " ";
        cout << ary[i].marks << endl;
    }

    return 0;
}