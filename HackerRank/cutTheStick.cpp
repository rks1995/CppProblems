#include <bits/stdc++.h>

using namespace std;

int findMin(int *sticks, int n) {
	int min = 1000;
	for (int i = 0; i < n; i++) {
		if (sticks[i] == 0)
			continue;
		else {
			if (sticks[i] < min) {
				min = sticks[i];
			}
		}
	}
	return min;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int sticks[n];
	int sticks_cut = 0;
	for (int i = 0; i < n; i++) {
		cin >> sticks[i];
	}
	int size = n;
	while (n != 1) {
		n = size;
		int min = findMin(sticks, n);
		sticks_cut = 0;
		for (int i = 0; i < size; i++) {
			if (sticks[i] != 0) {
				sticks[i] -= min;
				sticks_cut++;
			}
			else {
				n = n - 1;
			}
		}
		if (n == 0)
			break;
		cout << sticks_cut << endl;
	}


	return 0;
}