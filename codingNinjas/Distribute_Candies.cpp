#include <bits/stdc++.h>

#define ll                   long long
#define pb                    push_back
#define mp                    make_pair
#define vi                    vector<int>
#define mii                   map<int, int>
#define inf                   1e18
#define mk(arr, n, type)	  type *arr = new type(n)
#define MAX                   1000000000

using namespace std;

bool check(ll *arr, ll n, ll mid, ll k) {
	ll count = 0;
	for (int i = 0; i < n; i++) {
		ll ans = arr[i] / mid;
		count += ans;
	}
	if (count >= k) {
		return true;
	}
	return false;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		ll arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		ll start = 0;
		ll end = arr[n - 1];
		ll ans = 0;
		while (end >= start) {
			ll mid = start + (end - start) / 2;
			if (check(arr, n, mid, k)) {
				ans = mid;
				start = mid + 1;
			} else {
				end = mid - 1;
			}
		}
		cout << ans << endl;

	}
}