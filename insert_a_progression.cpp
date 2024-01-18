#include<bits/stdc++.h>
#define cmax(a, b) a = (a > b ? a : b)
#define cmin(a, b) a = (a < b ? a : b)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
     cin >> n >> m;
     int x[n];
	long long int mn = INT_MAX; long long int mx = 0;
	long long int ans = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		cmin(mn, x[i]);
		cmax(mx, x[i]);
		if (i)
			ans += abs(x[i] - x[i - 1]);
	}
	if (mn > 1) {
		int tmp = INT_MAX;
		for (int i = 0; i < n; i++) {
			cmin(tmp, abs(x[i] - 1) * 2);
		}
		cmin(tmp, abs(x[0] - 1));
		cmin(tmp, abs(x[n - 1] - 1));
		ans += tmp;
	}
	if (mx < m) {
		int tmp = INT_MAX;
		for (int i = 0; i < n; i++) {
			cmin(tmp, abs(x[i] - m) * 2);
		}
		cmin(tmp, abs(x[0] - m));
		cmin(tmp, abs(x[n - 1] - m));
		ans += tmp;
	}
	cout << ans << endl;

    }
}