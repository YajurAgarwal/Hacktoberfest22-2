#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    bool flag = 1;
    int c(0);
    while (c < nums.size() || flag == 0)
    {
        if (nums[c] == nums[c + 1])
        {
            flag = 0;
            return 1;
        }
        c++;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << containsDuplicate(v) << endl;
    return 0;
}
