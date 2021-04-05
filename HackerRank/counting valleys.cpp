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

int count_valleys(string path, int steps) {
	int sea_level = 0, valleys = 0;
	for (int i = 0; i < steps; i++) {
		if (path[i] == 'U')
			sea_level++;
		else
			sea_level--;
		if (path[i] == 'U' && sea_level == 0) {
			valleys++;
		}
	}
	return valleys;
}


int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int steps; cin >> steps;
	string path;
	cin >> path;
	int valleys = count_valleys(path, steps);
	cout << valleys;
}