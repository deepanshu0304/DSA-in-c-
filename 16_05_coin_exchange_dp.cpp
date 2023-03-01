#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e3 + 7;
int dp[10010]; // constraint was given in question
int func(int amount, vector<int> &coin)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;
    for (int coins  : coin) 
    {
        if (amount - coins >= 0)
        {        

            ans = min(ans + 0LL, func(amount - coins, coin) + 1LL);
        }
    }
    return dp[amount] = ans;
}

int coinChange(int amount, vector<int> &coin)
{

    int ans = func(amount, coin);
    return ans == INT_MAX ? -1 : ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int amounts;
    cin >> amounts;
    cout << coinChange(amounts, coins);

    return 0;
}