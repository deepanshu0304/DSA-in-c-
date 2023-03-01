#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 10;
int arr[N];
int main()
{
    int n;
    int Q;
    cin >> n >> Q;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        int result = 0;
        for (int i = 1; i < l; i++)
        {
            result = __gcd(result, arr[i]);
        }
        for (int j = r + 1; j <= n; j++)
        {
            result = __gcd(result, arr[j]);
        }
        cout << result;
    }
    return 0;
}
// Here the time complexity will be exceded if we increase the max value at constraint...


// 