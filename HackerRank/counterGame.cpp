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

int setBits(int n) {
	int counter = 0;
	while (n) {
		n = n & (n - 1);
		counter++;
	}
	return counter;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (setBits(n - 1) & 1)
			cout << "Louise" << endl;
		else {
			cout << "Richard" << endl;
		}
	}
}