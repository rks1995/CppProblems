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



int binarySearch(int scores[], int left, int right, int aliceScore) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (aliceScore == scores[mid]) {
			return mid;
		}
		else if (aliceScore < scores[mid] && aliceScore >= scores[mid + 1]) {
			return mid + 1;
		}
		else if (aliceScore > scores[mid] && aliceScore < scores[mid - 1]) {
			return mid;
		}

		else if (aliceScore > scores[mid]) {
			right = mid - 1;
		}
		else if (aliceScore < scores[mid]) {
			left = mid + 1;
		}
	}

	return -1;

}

void calculateRank(int scores[], int n, int aliceScore[], int m, int result[]) {
	int rank[n];
	rank[0] = 1;
	for (int i = 1; i < n; i++) {
		if (scores[i] == scores[i - 1]) {
			rank[i] = rank[i - 1];
		}
		else if (scores[i] != scores[i - 1]) {
			rank[i] = rank[i - 1] + 1;
		}
	}

	for (int i = 0; i < m; i++) {
		if (aliceScore[i] > scores[0]) {
			result[i] = 1;
		}
		else if (aliceScore[i] < scores[n - 1]) {
			result[i] = rank[n - 1] + 1;
		}
		else {
			int mid = binarySearch(scores, 0, n - 1, aliceScore[i]);
			result[i] = rank[mid];
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int scores[n];
	for (int i = 0; i < n; i++) {
		cin >> scores[i];
	}
	int m; cin >> m;
	int aliceScore[m];
	for (int i = 0; i < m; i++) {
		cin >> aliceScore[i];
	}
	int result[m];
	calculateRank(scores, n, aliceScore, m, result);
	for (int i = 0; i < m; i++) {
		cout << result[i] << endl;
	}

}