#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e3+7;
const int INF = 1e9+7;
int dp[N];
// we will write code for finding nth fibbonachi number
// The approach we used here is top down approach like we were given with n we broke down it into n-1 and n-2 so on
int fib(int n){
    if(n==0)
        return 0;
        if(n==1)
        return 1;
        if(dp[n] != -1)
        return dp[n];
        // upper two line of code is known as memoise   
        return dp[n] = fib(n - 1) + fib(n - 2);
}
/*
main idea of DP is we will not calculate again we will not repeat things
but up there in recursion when you expand it you fill find that you are recalculating manny
things again and again due to which it's time complex is near to 0(2^n);
we will store the values that are already calculated
and you will see suddenly it look like 0(n) complexity
*/
int main(){
        memset(dp, -1, sizeof(dp));// this work for certain values only
        int n;
        cin >> n;
        fib(n);
        
        return 0;
}