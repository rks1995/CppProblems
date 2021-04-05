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



int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int findgcd(int *b, int m) {
	int g = b[0];
	for (int i = 1; i < m; i++) {
		int g = gcd(g, b[i]);
	}
	return g;
}
int findlcm(int *a, int n) {
	int l = a[0];
	for (int i = 1; i < n; i++) {
		l = (l * a[i]) / gcd(l, a[i]);
	}
	return l;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	};
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	int l = findlcm(a, n);
	int g = findgcd(b, m);
	int count = 0;
	for (int i = 1; i <= l; i++) {
		if (l % i == 0) {
			if (g % i == 0) {
				count++;
			}
		}
	}
	cout << count << endl;
}