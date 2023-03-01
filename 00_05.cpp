
/* Print the factorial for  number N for T test cases
Print the ans in modulo M
where M is 10^9+7

constraints ---
1<=N<=1e5
1<=T<=1e5
*/






/*
#include <iostream>
using namespace std;

int main()
{
    const int M = 1e9 + 7;
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long int fact;
        fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact = (fact * i)%M;
        }
        cout << fact<<endl;
    }

    return 0;
}




*/






/*
Now this code will not run in online website....
becoz-----
0(T) 
0(N)
whole time complexity is 0(T*N)==0(N^2) as constraint are same ...so this goes to 1e10 iteration 
...thus time limit will exceed 
so we need to reduce its time complexity 
In this test cases there can be cases in which our input can repeat and we are calculating it again
so this is waste of time...
whan we can do is we alreay know by constraint that out input can be in range of 1e5..
so we can just calculate all factorial and store them in array ...and when they ask for anything we can just 
simply print them.... 
*/




#include <iostream>
using namespace std;
    const int M = 1e9 + 7;
    const int N = 1e5 + 10;
    long long int fact[N];

int main()
{
    fact[0]=1;
    fact[1]=1;
    for(int i =2;i<=N;i++){
        fact[i] = fact[i-1]*i;
    }

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        
       
        cout << fact[n]<<endl;
    }

    return 0;
}


/*
Here now time complexity is 
0(N) + 0(T)
N and t are same and equal to 1e5 ...thus iteration are 1e5 

thus this will work;
*/