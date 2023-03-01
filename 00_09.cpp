/*
given an 2d  array of n*n integer  ... anf given Q  querry in each querry given
 4 integer  a b c d   .... now you need to calculate  sum of square  from (a,b) to (c,d) ....*/

#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; i++)

        {
            cin >> arr[i][j];
        }
    }
    int Q;
    cin >> Q;

    while (Q--)
    {
        long long int  sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; i++)
        {
            for (int j = b; j <= d; j++)
            {
                sum += arr[i][j];
            }
        }
        cout<<sum;
    }

    return 0;
}



//good approach....



#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
int prfx[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; i++)

        {
            cin >> arr[i][j];
            prfx[i][j]= arr[i][j] + prfx[i-1][j] + prfx[i][j-1] - prfx[i-1][j-1];
        }
    }
    int Q;
    cin >> Q;

    while (Q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout<<prfx[c][d]-prfx[a-1][d]-prfx[c][b-1]+prfx[a-1][b-1];
      
    }

    return 0;
}
 // time complexity is less 





 