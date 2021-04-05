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
	int n;
	cin >> n;
	int score[n];
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	int highest_score = score[0];
	int lowest_score = score[0];
	int high_increases = 0, low_decrease = 0;
	for (int i = 1; i < n; i++) {
		if (score[i] > highest_score) {
			highest_score = score[i];
			high_increases++;
		}
		if (score[i] < lowest_score) {
			lowest_score = score[i];
			low_decrease++;
		}
	}
	cout << high_increases << " " << low_decrease << endl;

}