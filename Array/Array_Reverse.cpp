#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v = {1, 4, 3, 2, 6, 5};
    vector<int> v = {1};
    // vector<int> v = {1, 2, 3, 4, 5, 6};
    int n = v.size();
    int left = 0, right = n - 1;
    // int position = 3;
    // int left = position+1;
    // int right = n-1;
    while (left < right)
    {
        swap(v[left], v[right]);
        left++;
        right--;
    }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     swap(v[i], v[n - i - 1]);
    // }
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}
