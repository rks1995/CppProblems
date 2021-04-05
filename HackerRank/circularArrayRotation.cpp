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
	int n, k, q; cin >> n >> k >> q;
	int arr[n];
	if (k > n)
		k = k % n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int dummy[n];
	int j = 0;
	for (int i = (n - k); i < n; i++) {
		dummy[j++] = arr[i];
	}
	for (int i = 0; i < (n - k); i++) {
		dummy[j++] = arr[i];
	}
	while (q--) {
		int query = 0;
		cin >> query;
		cout << dummy[query] << endl;
	}


}