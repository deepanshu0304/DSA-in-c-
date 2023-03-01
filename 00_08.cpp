

/* 
Given a array of N integer ....given Q queries in each query given l and r ....you need to
find the sum of array from lth index to rth index  ....l and r included....
constraint----
 1<=N<=1e5
 1<=Q<=1e5
 1<=a[i]<=1e9
 1<=l,,,,r<=1e5
*/
#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    // for(int i =0;i<n;i++)
    for (int i = 1; i <= n; i++)
    { /* here we taken index equal 1...becoz it become easy
as the que was  to find the sum from lth index to rth index also l and r included
and limit of r is going to equal to n but if we start 0 base index than we nedd to do some more mehnat
doing l-1 and all ..... */
        cin >> a[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l; i <= r; i++)
        // for(int i = l-1;i<r;i++)
        {
            sum += a[i];
        }
        cout << sum;
    }

    return 0;
}



// time complexity is  more 0(N^2)..... 








// good approach...

/*#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int prfx[N];
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        cin >> a[i];
        prfx[i] = prfx[i - 1] + a[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int l, r;
        cin>>l>>r;
        cout << prfx[r] - prfx[l - 1] << endl;
    }

    return 0;
}
 // time complexity is less 0(N).....

 */