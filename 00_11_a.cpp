/*
Given an array(1 Based) of n integer in which all element are zero....
then given m queries .....in each query given 3 input ,.....
a b k ..... so u need to add k to each element between index a and b....after all the queries u need to
print the max element of array.....
3<=n<=1e7
1<=m<= 2*1e5
1<=a<=b<=n
0<=k<=1e9;
*/

#include <iostream>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        for (int i = a; i <= b; i++)
        {
            arr[i] = arr[i] + k;
        }
    }
    long long int max = 0;
    for (int j = 1; j <= n; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }
    cout << max;

    return 0;
}
// more time cmplexity
// for  most effective and better approach refer 17b.cpp