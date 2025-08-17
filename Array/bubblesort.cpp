#include <iostream>
using namespace std;
void swapVal(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    // int arr[] = {3, 2, 44, 12, 32};
    int arr[] = {3, 2, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int countTheLoop = 0;
    int counter = 1;
    while (counter < n)
    {
        // bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swapVal(arr[i], arr[i + 1]);
                // flag = true;
                countTheLoop++;
            }
        }
        // if (flag = false)
        // {
        // break;
        // }
        counter++;
    }
    cout << countTheLoop << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}