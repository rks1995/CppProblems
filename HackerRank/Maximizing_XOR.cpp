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
	int l, r; cin >> l >> r;
	int max = 0;
	for (int i = l; i <= r; i++) {
		for (int j = l; j <= r; j++) {
			int ans = i ^ j;
			if (ans >= max)
				max = ans;
		}
	}
	cout << max << endl;

}