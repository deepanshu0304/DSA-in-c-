// uppper bound and lower bound of sorted array using binary search
#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int element)
{
    int hi = v.size() - 1;
    int lo = 0;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] >= element)
    {
        return lo;
    }
    if (v[hi] >= element)
    {
        return hi;
    }
    return -1;
}
int upper_bound(vector<int> &v, int element)
{
    int hi = v.size() - 1;
    int lo = 0;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] <= element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] > element)
    {
        return lo;
    }
    if (v[hi] > element)
    {
        return hi;
    }
    return -1;
}
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    cout << lower_bound(v, x) << endl;
    cout << upper_bound(v, x) << endl;

    return 0;
}