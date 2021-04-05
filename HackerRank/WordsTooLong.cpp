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
	while (n--) {
		string words;
		cin >> words;
		if (words.length() <= 10) {
			cout << words << endl;
		}
		else {
			int len = words.length() - 2;
			cout << words[0] << len << words[words.length() - 1] << endl;
		}
	}
	return 0;
}