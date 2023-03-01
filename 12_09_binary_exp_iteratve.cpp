#include <bits/stdc++.h>
using namespace std;
/*
in preivous file we learnt recursive method which take more time than iterative method
so itereative methos is recommended ...when you find time complexity  it will be same but still it is good
In general iteration is better than recursion
*/
const int M = 1e9 + 7;
int bitExpIte(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans *1ll* a) % M;
        }
        a = (a *1ll* a) % M;
        b = b >> 1;
    }
    return ans;
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    int c = bitExpIte(a, b);
    cout << c;
    return 0;
}
// Time complexity is log(b)