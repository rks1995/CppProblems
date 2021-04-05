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

int findMinimumMove(int *book, int pages, int page_no) {
	int left_search = 0;
	int right_search = 0;
	if (pages % 2 == 0) {
		if (book[0] == page_no || book[pages - 1] == page_no) {
			return 0;
		}

		for (int i = 1; i < pages; i += 2) {
			if (book[i] == page_no || book[i + 1] == page_no) {
				left_search++;
				break;
			}
			left_search++;
		}
		for (int i = pages - 2; i >= 0; i -= 2) {
			if (book[i] == page_no || book[i - 1] == page_no) {
				right_search ++;
				break;
			}
			right_search++;
		}
	}
	else if (pages % 2 != 0) {
		if (book[0] == page_no || book[pages - 1] == page_no || book[pages - 2] == page_no)
			return 0;
		for (int i = 1; i < pages; i += 2) {
			if (book[i] == page_no || book[i + 1] == page_no) {
				left_search++;
				break;
			}
			left_search++;
		}
		for (int i = pages - 3; i >= 0; i -= 2) {
			if (book[i] == page_no || book[i - 1] == page_no) {
				right_search ++;
				break;
			}
			right_search++;
		}
	}

	if (right_search >= left_search)
		return left_search;
	return right_search;
}



int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int pages, page_no;
	cin >> pages >> page_no;
	int book[pages];
	for (int i = 0; i < pages; i++) {
		book[i] = i + 1;
	}
	int ans = findMinimumMove(book, pages, page_no);
	cout << ans;
}