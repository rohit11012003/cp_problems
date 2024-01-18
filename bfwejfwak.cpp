#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int mod = 1e9 + 7; // we can store upto 1e7 elemments on an array
#define ll long long
#define f(i, a, n) for (int i = a; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[N] = {0};
        int n;
        cin >> n;
        int a[n], b[n], s(0), m(0), sum(0), mx(0);
        f(i, 0, n)
        {
            cin >> a[i];
        }
        f(i, 0, n)
        {
            mx = max(a[i], mx);
            b[i] = mx;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] < b[i])
            {
                s = i;
                break;
            }
        }
        f(i, 0, s)
        {
            A[a[i]]++;
        }
        for (int i = n - 1; i >= s; i--)
        {
            if (A[a[i]])
            {
                m = i;
                break;
            }
        }
        f(i, s, m)
        {
            A[a[i]]++;
        }
        f(i, 0, n + 1)
        {
            if (A[i])
            {
                sum++;
            }
        }

        cout << sum << endl;
    }
}
