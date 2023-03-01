// Better code...
//   sqrt of function using binary search...

// similarly you can find nth root of number using binary search......
// time complexity ....
/*
suppose you need to find the pth root of a number say n and you need accuracy till d decimal point

then time complexity will be
p*log(n*(10^d))

p is becoz where are you doing mid*mid u need to multiply that thing p time
either by recursion or by

now d is accuracy
basicaly the time complexity will be log(search space)
now our search space depend on precision
suppose u need only integer then simply search space will be n becoz there are n integer
but as your accuracy point increase our search space also increase
total no in  one integer range will be 10*d
so search space will be n*10*d.....Hence proved

*/

#include <bits/stdc++.h>

using namespace std;
double eps = 1e-6;
int main()
{
    double n;
    cin >> n;
    double lo = 1, hi = n;
    while (hi - lo > eps)
    {
        double mid = (hi + lo) / 2;
        if (mid * mid < n)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout << lo << endl
         << hi << endl;
    cout << pow(n, 1.0 / 2);

    return 0;
}