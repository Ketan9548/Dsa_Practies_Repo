#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {2, 4, 7, 10};
    vector<int> b = {2, 3};
    int n = a.size();
    int m = b.size();
    vector<int> ans(n + m);
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        ans[i] = b[i];
    }
    sort(ans.begin(), ans.end());
    for (auto u : ans)
    {
        cout << u << " ";
    }
    return 0;
}