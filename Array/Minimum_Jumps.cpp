#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // vector<int> arr = {1, 4, 3, 2, 6, 7};
    int n = arr.size();
    int currentReach = 0;
    int MaxReach = 0;
    int jump = 0;
    if (arr[0] == 0)
    {
        jump = -1;
        cout << jump << endl;
    }
    for (int i = 0; i < n; i++)
    {
        MaxReach = max(MaxReach, i + arr[i]);
        if (MaxReach >= n - 1)
        {
            cout << jump + 1 << endl;
        }
        if (i == currentReach)
        {
            if (i == MaxReach)
            {
                cout << -1;
            }
            else
            {
                jump++;
                currentReach = MaxReach;
            }
        }
    }
    cout << endl;
    cout << jump;

    return 0;
}