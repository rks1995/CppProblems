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

int interestingSequence(int *sequence, int n, int k, int l) {
	sort(sequence, sequence + n);
	int cost = 0;
	int  min_cost = INT_MAX;
	for (int x = sequence[0]; x <= sequence[n - 1]; x++) {
		int increase = 0;
		int decrease = 0;
		for (int i = 0; i < n; i++) {
			if (sequence[i] < x) {
				increase += x - sequence[i];
			}
			else if (sequence[i] > x) {
				decrease += sequence[i] - x;
			}
		}
		if (decrease > increase) {
			continue;
		}
		else {
			cost = decrease * k + (increase - decrease) * l;

		}
		min_cost = min(cost, min_cost);
		cost = 0;
	}
	return min_cost;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k, l; cin >> n >> k >> l;
	int sequence[n];
	for (int i = 0; i < n; i++) {
		cin >> sequence[i];
	}
	ll min_cost = interestingSequence(sequence, n, k, l);
	cout << min_cost << endl;
}