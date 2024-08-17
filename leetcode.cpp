#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &n, int tar)
{
    int l = 0, r = n.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (n[mid] == tar)
        {
            return mid;
        }
        if (n[l] <= n[mid])
        {
            if (tar >= n[l] && tar < n[mid])
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        else
        {
            if (tar > n[mid] && tar <= n[r])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);

    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
