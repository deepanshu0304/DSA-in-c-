#include <iostream>
using namespace std;
const int N = 1e7 + 10;
long long int arr[N];
long long int pfx[N];

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b + 1] -= k;
    }
    for (int i = 1; i <= n; i++)
    {
        pfx[i] = pfx[i - 1] + arr[i];
    }
    long long int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pfx[i] > max)
            max = pfx[i];
    }

    cout << max;

    return 0;
}