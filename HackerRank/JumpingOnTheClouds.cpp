#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n, k; cin >> n >> k;
	int clouds[n];
	for (int i = 0; i < n; i++) {
		cin >> clouds[i];
	}
	int energy = 100;
	int i = 0;
	i = (i + k) % n;
	while (i != 0) {
		if (clouds[i] == 1) {
			energy -= 3;
		}
		if (clouds[i] == 0) {
			energy -= 1;
		}
		i = (i + k) % n;

	}
	energy = (clouds[i] == 1) ? energy - 3 : energy - 1;
	cout << energy << endl;

	return 0;
}