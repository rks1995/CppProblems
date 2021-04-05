#include <bits/stdc++.h>

#define ll                   long long
#define pb                    push_back
#define mp                    make_pair
#define vi                    vector<int>
#define mii                   map<int, int>
#define inf                   1e18
#define mk(arr, n, type)	  type *arr = new type(n)
#define MAX	  				  1000000000

// 1 <= n <= 10^5
// 1 <= q <= 10^5
// 1 <= X <= 10^9

using namespace std;

int solve(ll *prefix_sum, int start, int end, ll sum) {
	if (end <= start) {
		return -1;
	}
	if (sum > prefix_sum[end]) {
		return end;
	}
	int mid = (end + start) / 2;
	if (sum == prefix_sum[mid]) {
		return mid;
	}
	if (mid > 0 && sum >= prefix_sum[mid] && sum < prefix_sum[mid + 1]) {
		return mid;
	}
	if (sum < prefix_sum[mid]) {
		return solve(prefix_sum, start, mid - 1, sum);
	}
	return solve(prefix_sum, mid + 1, end, sum);

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ll prefix_sum[n];
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	int q;
	cin >> q;
	while (q--) {
		ll sum;
		cin >> sum;
		int days = solve(prefix_sum, 0, n - 1, sum);
		ll money_left = sum;
		if (days != -1) {
			money_left -= prefix_sum[days];
		}
		cout << days + 1 << " " << money_left << endl;
	}
	return 0;
}