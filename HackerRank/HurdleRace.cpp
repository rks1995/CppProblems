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
	int n, k;
	cin >> n >> k;
	int heights[n];
	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}
	int max = heights[0];
	int doses = 0;
	for (int i = 1; i < n; i++) {
		if (max < heights[i]) {
			max = heights[i];
		}
	}
	if (k > max)
		cout << doses << endl;
	else {
		doses = max - k;
		cout << doses << endl;
	}

}