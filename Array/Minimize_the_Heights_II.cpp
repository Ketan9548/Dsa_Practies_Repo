#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // vector<int> arr = {3, 9, 12, 16, 20};
    vector<int> arr = {1, 8, 10, 6, 4, 6, 9, 1};
    int k = 7;
    int n = arr.size();
    for (auto y : arr)
    {
        cout << y << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            arr[i] = arr[i] + k;
        }
        else if (arr[i] > k)
        {
            arr[i] = arr[i] - k;
        }
    }
    sort(arr.begin(), arr.end());
    for (auto u : arr)
    {
        cout << u << " ";
    }
    cout << endl;
    cout << arr[n - 1] - arr[0];

    return 0;
}

// output is 9
