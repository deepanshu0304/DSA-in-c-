#include <bits/stdc++.h>
const int N = 1e6 + 10;

using namespace std;
int n;
long long m;
long long a[N];

bool iswoodsufficient(int h)
{
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= h)
        {
            wood += (a[i] - h);
        }
    }
    return wood >= m;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long lo = 0;
    long long hi = 1e9;
    float count =0;
    while (hi - lo > 1)
    {

        count++;
        long long mid = (hi + lo) / 2;
        if (iswoodsufficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }

    if (iswoodsufficient(hi))
    {
        cout << hi << endl;
    }
    else
        cout << lo << endl;
        cout<<ceil(count)<<endl;

    return 0;
}

/*
Time complexity for our function is 0(n) where n is size of array

and our while loop has time complexity of log(hi)

our all complexity is n*log(hi);
*/