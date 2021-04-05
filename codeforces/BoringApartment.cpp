#include <bits/stdc++.h>

using namespace std;


int count_digit(int x) {
	int count = 0;
	while (x) {
		x /= 10;
		count++;
	}
	if (count == 1)
		return 1;
	if (count == 2)
		return 3;
	if (count == 3)
		return 6;
	if (count == 4)
		return 10;

	return 0;

}
void solve() {
	int x; cin >> x;

	int ans = 0;
	if (x % 10 == 1) {
		int digits = count_digit(x);
		ans += digits;
	}
	else {
		int l = x % 10;
		ans += 10 * (l - 1);
		int digits = count_digit(x);
		ans += digits;
	}

	cout << ans << endl;
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

	return 0;
}