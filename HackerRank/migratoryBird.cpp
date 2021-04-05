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

int returnLargest(map<int, int>freq) {
	int largest = 0;
	int index = 0;
	for (auto it : freq) {
		if (it.second > largest) {
			largest = it.second;
			index = it.first;
		}
	}
	return index;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int bird[n];
	map<int, int> freq;
	for (int i = 0; i < n; i++) {
		cin >> bird[i];
		freq[bird[i]]++;
	}
	int ans = returnLargest(freq);
	cout << ans;

}