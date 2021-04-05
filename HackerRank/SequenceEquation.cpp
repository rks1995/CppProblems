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
	int n; cin >> n;
	map<int, int> ordr;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		ordr.insert(mp(k, i + 1));
	}

	for (int i = 1; i <= n; i++) {
		int index = ordr[i];
		int ans = ordr[index];
		cout << ans << endl;
	}
}