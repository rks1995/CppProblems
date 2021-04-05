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
	int n, k, max = 0;
	cin >> n;
	int a[100] = {0};
	for (int i = 0; i < n; i++) {
		cin >> k;
		a[k]++;
	}
	for (int i = 0; i < n - 1 ; i++) {
		if (a[i] + a[i + 1] > max)
			max = a[i] + a[i + 1];
	}
	cout << max;
	return 0;
}