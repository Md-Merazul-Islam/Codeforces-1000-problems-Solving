#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int element_size;
        cin >> element_size;
        int even_num = 0;
        int odd_num = 0;
        int value[element_size];
        for (int j = 0; j < element_size; j++)
        {

            cin >> value[j];

            if (value[j] % 2 == 0)
                even_num++;
            else
                odd_num++;
        }
        if (element_size % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if (even_num == odd_num)
        {
            cout << 0 << endl;
        }
        else if (even_num > odd_num)
        {
            cout << even_num - element_size / 2 << endl;
        }
        else if (even_num < odd_num)
        {
            cout << odd_num - element_size / 2 << endl;
        }
    }

    return 0;
}