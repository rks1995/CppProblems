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

int board[11][11] = {0};

bool isPossible(int n, int row, int col) {
	//check if we can place in the same coloum
	for (int i = row - 1; i >= 0; i--) {
		if (board[i][col] == 1)
			return false;
	}

	//for upper right diagonal
	for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
		if (board[i][j] == 1)
			return false;
	}

	//lower left diagonal
	for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j] == 1)
			return false;
	}

	return true;
}

void nQueenHelper(int n, int row) {
	if (n == row) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << board[i][j];
			}
		}
		cout << endl;
		return;
	}

//for current row, check each column if we can place the queen.
	for (int col = 0; col < n; col++) {
		if (isPossible(n, row, col)) {
			board[row][col] = 1;
			nQueenHelper(n, row + 1);
			board[row][col] = 0; //backtracking
		}
	}
	return;
}


void nQueen(int n) {
	nQueenHelper(n, 0);
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	nQueen(n);
}