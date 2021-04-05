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

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, k;
	cin >> n >> k;
	long long *modArr = new long long[k];
	memset(modArr, 0, sizeof(modArr));
	for (long long i = 0; i < n; i++) {
		long long tmp;
		cin >> tmp;
		modArr[tmp % k]++;
	}
	long long result = 0;
	// Can include one multiple of the actual number
	if (modArr[0] >= 1) {
		result++;
	}
	for (long long i = 1; i <= k / 2; i++) {
		long long tmp = modArr[i];
		if (modArr[k - i] > tmp) {
			tmp = modArr[k - i];
		}
		if (k % 2 == 0 && i == k / 2 && modArr[k / 2] > 0) {
			result++;
		} else {
			result += tmp;
		}

	}
	cout << result;
	return 0;
}
