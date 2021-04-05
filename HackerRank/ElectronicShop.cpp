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

int findExpensive_Key_Drive(int *keyboard, int *drive, int n, int m, int budget) {
	ll total = 0;
	ll expense = 0;
	for (int i = 0; i < n; i++) {
		if (keyboard[i] >= budget)
			continue;
		for (int j = 0; j < m; j++) {
			total = keyboard[i] + drive[j];
			if (total >= expense && total <= budget)
				expense = total;
		}
	}
	if (expense)
		return expense;
	return -1;
}


int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int budget, n, m;
	cin >> budget >> n >> m;
	int keyboard[n], drive[m];
	for (int i = 0; i < n; i++) {
		cin >> keyboard[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> drive[i];
	}

	int ans = findExpensive_Key_Drive(keyboard, drive, n, m, budget);
	cout << ans << endl;
}
