#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, -2, 5};
    // vector<int> v = {2, 3, -8, 7, -1, 2, 3};
    int n = v.size();
    int currentsum = v[0];
    int maxsum = v[0];
    for (int i = 0; i < n; i++)
    {
        currentsum = max(v[i], currentsum + v[i]);
        maxsum = max(maxsum, currentsum);
    }
    cout << maxsum;
    return 0;
}