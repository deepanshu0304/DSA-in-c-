/*
given an integer array ...you need to print yes if there is only one highest ocuuring element
and print no if highest occuring element is not unique.... */
#include <bits/stdc++.h>
using namespace std;
const int M = 1e7 + 10;

int hsah[M];
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        hsah[arr[i]]++;
    }
    int max = 0;
    int *y;
    for (int i = 0; i < n; i++)
    {
        if (hsah[i] > max)
        {
            max = hsah[i];
            y = &hsah[i];
        }
    }
    --(*y);
    for (int a = 0; a < n; a++)
    {
        if (hsah[a] == max)
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}


/*if you want to compute the hash array of negative no.... */