#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(a, b) for(int i = a; i < b;i++)
const int M = 1e9+7;
const int N = 1e3+7;
int wt[105];
int val[105];
long long dp[105][100005];
long long func(int ind , int wt_left){
    if(wt_left==0)
        return 0;
   if(ind<0)
        return 0;
        if(dp[ind][wt_left]!=-1){
        return dp[ind][wt_left];
        }
    long long ans  = func(ind - 1, wt_left);
    if(wt_left-wt[ind]>=0)
   ans  =  max(ans,(func(ind - 1, wt_left - wt[ind]) + val[ind]));
   return dp[ind][wt_left]=ans;
}

int main(){
   memset(dp, -1, sizeof(dp));
   int n, w;
   cin >> n >> w;
   rep(0, n)
   {
   cin >> wt[i] >> val[i];
    }
    cout << func(n - 1, w);
    return 0;
}