#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 7;
/*
given there are n stones numbered 1 to n
currently frog is on stone one ....if the frog is on ith stone he can go to
ith+1 stone , ith+2 stone.... till ith+k stone   the cost incured in jumping from i to j stone is
|hi-hj| ....you need to tell the miniimum cost incured
*/
int h[N];
int dp[N];
int k;
int func(int x)
{
    if (x == 0)
        return 0;
    if (dp[x] != -1)
        return dp[x];
    int cost = INT_MAX;
    for (int i = 1; i <= k; i++)
    {

        if (x - i >= 0)
            cost = min(cost, func(x - i) + abs(h[x] - h[x - i]));
    }

    return dp[x] = cost;
}

// time complexity is (n*k)
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << func(n - 1);
    return 0;
}