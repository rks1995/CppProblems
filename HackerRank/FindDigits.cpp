#include <bits/stdc++.h>

#define ll                   long long
#define pb                    push_back
#define mp                    make_pair
#define vi                    vector<int>
#define mii                   map<int, int>
#define inf                   1e18
#define mk(arr, n, type)	  type *arr = new type(n)
#define MAX	  				  1000000000

using namespace std;

void solve() {
	ll n; cin >> n;
	int temp = n;
	ll count = 0;
	while (n) {
		int d = n % 10;
		if (d == 0) {
			n /= 10;
			continue;
		}

		if (temp % d == 0)
			count++;
		n /= 10;
	}
	cout << count;
	return;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}