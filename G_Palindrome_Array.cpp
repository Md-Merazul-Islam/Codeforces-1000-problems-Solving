// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int i=0,j=n-1;
//     int flag=1;
//     while (i<j)
//     {
//         if (a[i]!=a[j])
//         {
//             flag=0;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if (flag==1)
//     {
//         cout<<"YES";
//     }
//     else
//     {
//         cout<<"NO";
//     }

//     return 0;
// }





#include <bits/stdc++.h>

using namespace std;


int palindrome(int n)
{
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>> a[i];

    }
    int i=0,j=n-1;
    int flag=1;

    while (i<j)
    {
        if (a[i]!=a[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }

}

int main()
{
    int n;
    cin>>n;

    int ans=palindrome(n);
    if (ans)
    {
        cout<<"YES";
    }
    else
    {
        cout <<"NO";
    }
    return 0;
}