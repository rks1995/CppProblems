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
	mii freq;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		freq[temp]++;
	}

	int count = 0;
	int max = 0;
	mii ::iterator it;
	for (it = freq.begin(); it != freq.end(); it++) {
		if (it->second > max)
			max = it->second;
	}
	for (it = freq.begin(); it != freq.end(); it++) {
		count += it->second;
	}

	cout << count - max << endl;

}