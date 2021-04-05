#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
	int ans = 0;
	if (y1 == y2 && m1 == m2) {
		if (d1 > d2) {
			ans = 15 * (d1 - d2);
		} else {
			return ans;
		}
	}
	else if (y1 == y2) {
		if (m1 > m2) {
			ans = 500 * (m1 - m2);
		}
	}
	else if (y1 > y2) {
		ans = 10000 * (y1 - y2);
	}
	else {
		return ans;
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int d1, m1, y1; cin >> d1 >> m1 >> y1;
	int d2, m2, y2; cin >> d2 >> m2 >> y2;
	int fine = libraryFine(d1, m1, y1, d2, m2, y2);
	cout << fine << endl;

	return 0;
}