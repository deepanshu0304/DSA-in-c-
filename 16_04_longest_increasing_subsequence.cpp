#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 7;
vector<int> a(N);
int dp[N];
/*
you are given with an array you need to tell the length of longest increasing subsequence in array
*/
int lis(int x) // longest subsequence if x is last no in that subsequence 
{
    if(dp[x]!=-1)
        return dp[x];
    int ans = 1;
    for (int i = 0; i < x; i++)
    {
        if (a[x] > a[i])
        {
            ans = max(ans, lis(i) + 1);
        }
    }

    return dp[x]=ans;
}
//Time complexity is 0(n^2)

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout << ans;
    return 0;
}