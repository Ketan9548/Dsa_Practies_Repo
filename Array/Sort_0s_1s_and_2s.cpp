// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {0, 1, 2, 0, 1, 2};
//     int n = arr.size();
//     int countzero = 0;
//     int countone = 0;
//     int counttwo = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             countzero++;
//         }
//         else if (arr[i] == 1)
//         {
//             countone++;
//         }
//         else
//         {
//             counttwo++;
//         }
//     }
//     cout<<countzero<<" "<<countone<<" "<<counttwo<<endl;
//     arr.clear();
//     for (int i = 0; i < countzero; i++)
//     {
//         arr.push_back(0);
//     }
//     for (int i = 0; i < countone; i++)
//     {
//         arr.push_back(1);
//     }
//     for (int i = 0; i < counttwo; i++)
//     {
//         arr.push_back(2);
//     }
//     for (auto val : arr)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

