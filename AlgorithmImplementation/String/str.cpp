#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, M; cin >> N >> M;
	int arr[N][M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	int q; cin >> q;
	while (q--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		int incorrectVaccine = 0;
		for (int row = l1 - 1; row < l2; row++) {
			for (int col = r1 - 1; col < r2; col++) {
				if (arr[row][col] % 2 == 1) incorrectVaccine++;
			}
		}
		cout << incorrectVaccine << endl;
	}
	return 0;
}