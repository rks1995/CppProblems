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
	int i, j , k; cin >> i >> j >> k;
	int beautiful_days = 0;
	for (int range = i; range <= j; range++) {
		int num = range;
		int temp = num;
		int reverse = 0;
		while (num) {
			int n = num % 10;
			reverse = reverse * 10 + n;
			num /= 10;
		}
		if (abs(temp - reverse) % k == 0) {
			beautiful_days++;
		}
	}
	cout << beautiful_days << endl;
}