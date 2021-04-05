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
	string s, t; cin >> s >> t;
	int k; cin >> k;
	int commonLength = 0;
	for (int i = 0, j = 0; i < s.length() && j < t.length(); i++, j++) {
		if (s[i] == t[j]) {
			commonLength++;
		}
		else
			break;
	}
	int s_len = s.length();
	int t_len = t.length();

// if k is small but the size of s is very big
	if ((s_len + t_len - 2 * commonLength) > k) {
		cout << "No";
	}
//if in k moves we can successfully delete and add
	else if (((s_len + t_len) - 2 * commonLength) % 2 == k % 2) {
		cout << "Yes";
	}
//string can be deleted and added easily in the given moves
	else if (s_len + t_len - k < 0) {
		cout << "Yes";
	}

	else {
		cout << "No";
	}
}