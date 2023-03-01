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
    for (int coins : coin)
    {
        if (amount - coins >= 0)
        {

            ans = min(ans + 0LL, func(amount - coins, coin) + 1LL);
        }
    }
    return dp[amount] = ans;
}
/*
 In previous que we need to tell the minimum no of coin here we need to
 tell the the no. of ways in which we can make that amount 
 Normaly you want to change only one line  ans where you will count the ways keeping the whole code same
 but it is wrong suppose we need to 5 rupees and we have 1,2,5 coins
 we can make it by using only 5 rs coin
 or 5  1rs coin
 3 1rs coin and 1 2rs coin
 1 1rs coin and 2 2rs coin 
 now suppose we are making it with 1 1 1 2
 our code will calculate some duplicate value like it will calculate 2 1 1 1 and 1 2 1 1 and 1 1 2 1
 which is wrong 
 so our work is to dlt them .....we will start from one coin and will finish them first 
*/

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