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
	int magic_mat[8][3][3] = {
		{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
		{{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
		{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
		{{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
		{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
		{{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
		{{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
		{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
	};

	int A[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			scanf("%d", &A[i][j]);
	}

	int min_cost = 81;
	for (int k = 0; k < 8; k++) {
		int crt_cost = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
				crt_cost += abs( A[i][j] - magic_mat[k][i][j] );
		}
		if (crt_cost < min_cost)
			min_cost = crt_cost;
	}

	printf("%d", min_cost);
}