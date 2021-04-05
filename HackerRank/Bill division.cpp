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
	int bill[n];
	ll total = 0;
	for (int i = 0; i < n; i++) {
		cin >> bill[i];
		if (i != k)
			total += bill[i];
	}
	int bill_per_person = total / 2;
	int anna_paid;
	cin >> anna_paid;
	if (anna_paid > bill_per_person) {
		cout << (anna_paid - bill_per_person) << endl;
	}
	else if (anna_paid == bill_per_person) {
		cout << "Bon Appetit" << endl;
	}

}