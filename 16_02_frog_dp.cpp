#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e3+7;
/*
given there are n stones numbered 1 to n 
currently frog is on stone one ....if the frog is on ith stone he can either go to 
ith+1 stone or ith+2 stone....the cost incured in jumping from i to j stone is 
|hi-hj| ....you need to tell the miniimum cost incured
*/
int h[N];
int dp[N];
int func(int x)
{
        if (x==0)
            return 0;
            if(dp[x]!=-1)
            return dp[x];
        int cost = INT_MAX;
        cost = min(cost, func(x - 1) + abs(h[x] - h[x - 1]));
        if(x>1)
        cost = min(cost, func(x - 2) + abs(h[x] - h[x - 2]));

        return dp[x] = cost;
}
int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> h[i];
    }
    cout << func(n - 1);
    return 0;
}