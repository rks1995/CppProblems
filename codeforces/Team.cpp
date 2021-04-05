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

int ans = 0;

void solve() {
	int arr[3];
	int participants = 0;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
		if (arr[i] == 1)
			participants++;
	}
	if (participants > 1) {
		ans += 1;
	}
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
	}
	cout << ans << endl;
}