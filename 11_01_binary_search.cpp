#include <bits/stdc++.h>
using namespace std;
// finding a number in given sorted array using binary search

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0;
    int hi = n - 1;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < to_find)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == to_find)
    {
        cout << lo << endl;
    }
    else if (v[hi] == to_find)
    {
        cout << hi << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}