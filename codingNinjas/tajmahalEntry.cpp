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

int windowEntry(ll *windows, int n) {
	for (int i = 0; i < n; i++) {
		int value = 0;
		windows[i] -= i;
		if (windows[i] < 0) {
			windows[i] = 0;
		}
		value = windows[i] / n;
		if (windows[i] % n != 0) {
			value += 1;
		}
		windows[i] = i + (value * n);
	}
	int index = 0;
	int min = windows[0];
	for (int i = 1; i < n; i++) {
		if (min > windows[i]) {
			min = windows[i];
			index = i;
		}
	}
	return index;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	ll windows[n];
	for (int i = 0; i < n; i++) {
		cin >> windows[i];
	}
	int ans = windowEntry(windows, n);
	cout << ans + 1 << endl;

}