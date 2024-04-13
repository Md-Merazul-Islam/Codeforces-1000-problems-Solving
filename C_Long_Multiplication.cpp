#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x, y;
        cin >> x >> y;
        for (int i = 0; i < x.size(); i++)
        {
            //  cout<<"it -- "<<i<<endl;
            if ((x > y && x[i] > y[i]) || (y > x && y[i] > x[i]))
            {
                swap(x[i], y[i]);
            }
        }
        cout << x << endl
             << y << endl;
    }

    return 0;
}
