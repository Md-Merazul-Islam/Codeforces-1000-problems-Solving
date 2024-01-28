#include <bits/stdc++.h>

using namespace std;
class student{
    public:
        string name;
        int roll;
        int marks;

};

int main()
{
    int n;cin>>n;
    student a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i].name;
        cin>>a[i].roll;
        cin>>a[i].marks;

    }
    int tmp=0;
    for (int i=n-1;i>=0;i--)
    {
        cout<<a[i].name<<" ";
        cout<<a[i].roll<<" ";
        cout<<a[i].marks<<endl;
       

    }
    return 0;
}