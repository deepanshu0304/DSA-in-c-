/*
Given a array of N integer .
Given Q queries and in each query given a no. X
print the count of that number in array...


constraint---
  1<=N<=1e5
  1<=Q<=1e5
  1<=a[i]<=1e7
  */

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//     }
//     int Q;
//     cin >> Q;
//     while (Q--)
//     {
//         int X;
//         cin >> X;
//         int count = 0;
//         for (int i = 0; i < N; i++)
//         {
//             if (arr[i] == X)
//             {
//                 count++;
//             }
//         }
//         cout << count;
//     }

//     return 0;
// }
// TIME complexity is 0(N)+ 0(Q*N)== 0(N^2)==1e10 iteration....

#include <iostream>
using namespace std;
const int M = 1e7 + 5;
int hsh[M];

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;

        cout << hsh[X] << endl;
    }
    return 0;
}
