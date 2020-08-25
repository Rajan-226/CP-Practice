#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout << "\n"
#define db(x) cout << x << " "
#define fi(a, b) for (int i = a; i < b; i++)
#define fj(a, b) for (int j = a; j < b; j++)
#define fk(a, b) for (int k = a; k < b; k++)
#define F first
#define S second
#define UM unordered_map<int, int>
#define MP map<int, int>
#define mxsize (int)1e6
void fun()
{
    string s;
    cin >> s;
    int x;
    cin >> x;

    int n = s.length();

    string ans = "";

    fi(0, n)
        ans += '1';

    // converting
    fi(0, n)
    {
        if (s[i] == '0')
        {
            if (i + x < n)
            {
                ans[i + x] = '0';
            }

            if (i - x >= 0)
            {
                ans[i - x] = '0';
            }
        }
    }

    bool ok = true;

    fi(0, n)
    {
        if (s[i] == '1')
        {

            if (i - x < 0 && i + x >= n)
                {
                    ok = false;
                }

            if (i - x < 0 && i + x < n && ans[i + x] != '1')
            {
                ok = false;
            }

            if (i - x >= 0 && i + x < n)
            {
                int count = 2;
                if (ans[i - x] != '1')
                    count--;
                if (ans[i + x] != '1')
                    count--;
                if (!count)
                    ok = false;
            }

            if (i - x >= 0 && i + x >= n && ans[i - x] != '1')
            {
                ok = false;
            }
        }
    }

    if (!ok)
    {
        cout << "-1\n";
    }
    else
        cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("/ATOM/input.txt", "r", stdin);
    freopen("/ATOM/output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        fun();
    }
}