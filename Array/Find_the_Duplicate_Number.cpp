// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 3, 4, 2, 2};
//     int n = v.size();
//     int left = 0;
//     int right = n - 1;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] <= mid)
//             {
//                 count++;
//             }
//         }
//         if (count > mid)
//         {
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }
//     cout << left;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 3, 4, 2, 2};
//     int n = v.size();
//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == v[i + 1])
//         {
//             cout << v[i];
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 4, 2, 2};
    int n = v.size();
    int fast = v[0];
    int slow = v[0];
    do
    {
        slow = v[slow];
        cout << "slow: " << slow << " ";
        fast = v[v[fast]];
        cout << "fast: " << fast << " ";
    } while (slow != fast);

    fast = v[0];
    while (slow != fast)
    {
        slow = v[slow];
        fast = v[fast];
    }
    cout << endl;
    cout << fast;

    return 0;
}