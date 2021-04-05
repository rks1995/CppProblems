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
	int year; cin >> year;
	if (year == 1918)
		cout << "26" << "." << "09" << "." << year;

	else if (year >= 1700 && year <= 1917) {
		if (year % 4 == 0) {
			cout << "12" << "." << "09" << "." << year;
		}
		else
			cout << "13" << "." << "09" << "." << year;
	}
	else if (year > 1918 && year <= 2700) {
		if (year % 400 == 0)
			cout << "12" << "." << "09" << "." << year;
		else if (year % 4 == 0 && year % 100 != 0)
			cout << "12" << "." << "09" << "." << year;
		else
			cout << "13" << "." << "09" << "." << year;
	}
}