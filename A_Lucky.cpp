#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        int sum1 = 0;
        int sum2 = 0;
        //for every line loop;
        for (int j=0;j<3;j++)
        {
            sum1+=str[j];
            sum2+=str[j+3]; 
        }
        if (sum1==sum2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}