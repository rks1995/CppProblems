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
	int n;
	cin >> n;
	int chocolateBar[n];
	for (int i = 0; i < n; i++) {
		cin >> chocolateBar[i];
	}
	int days, month;
	int sum = 0, ways = 0, count = 0;
	cin >> days >> month;
	for (int i = 0; i <= n - month; i++) {
		sum += chocolateBar[i];
		count ++;
		for (int j = i + 1; j < n; j++) {
			sum += chocolateBar[j];
			count++;
			if (count == month) {
				count = 0;
				break;
			}

		}
		if (sum == days) {
			ways++;
		}
		sum = 0;
	}

	cout << ways << endl;

}