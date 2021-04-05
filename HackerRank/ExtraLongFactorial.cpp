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
	int m = 2;
	int arr[1000];
	int length = 1;
	int x = 0;
	arr[0] = 1;

	while (m <= n) {
		x = 0;
		int num = 0;
		while (x < length) {
			arr[x] = arr[x] * m;
			num = arr[x] + num;
			arr[x] = num % 10;
			num /= 10;
			x++;
		}
		while (num != 0) {
			arr[length] = num % 10;
			num /= 10;
			length++;
		}
		m++;
	}

	for (int i = (length - 1) ; i >= 0; i--) {
		cout << arr[i];
	}
}