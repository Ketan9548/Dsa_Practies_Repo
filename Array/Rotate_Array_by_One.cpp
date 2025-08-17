#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int temp = arr[n-1];
    for(int i = n-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0]  = temp;
    for(auto u:arr){
        cout<<u<<" ";
    }
    return 0;
}