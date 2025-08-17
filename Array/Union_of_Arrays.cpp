#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {1, 2, 3, 2, 1};
    vector<int> ans;
    set<int> unique;
    int n = a.size();
    int m = b.size();
    for (auto k : a)
    {
        unique.insert(k);
    }
    for (auto l : b)
    {
        unique.insert(l);
    }
    for (auto o : unique)
    {
        ans.push_back(o);
    }
    return 0;
}
