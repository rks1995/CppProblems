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
	string a, b; cin >> a >> b;
	int min_cost = 0;
	for (int i = 0; i < n;) {
		if (a[i] != b[i]) {
			//either swap or flip
			if (i + 1 < n && a[i] != a[i + 1] && a[i + 1] != b[i + 1]) {
				//swap
				i += 2;
			}
			else {
				//flip
				i++;
			}
			min_cost++;
		}
		else {
			i++;
		}
	}
	cout << min_cost << endl;
}