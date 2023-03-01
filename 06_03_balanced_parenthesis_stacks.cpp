
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> m = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] < 0)
                st.push(s[i]);

            else
            {
                if (st.empty())
                {
                    cout << "NO" << endl;
                    return 0;
                }
                char x = st.top();
                if (m[x] + m[s[i]] != 0)
                {
                    cout << "NO" << endl;
                    return 0;
                }
                st.pop();
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}