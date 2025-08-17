#include <iostream>
using namespace std;
int main()
{
    int arr[] = {43, 121, 76, 92, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}