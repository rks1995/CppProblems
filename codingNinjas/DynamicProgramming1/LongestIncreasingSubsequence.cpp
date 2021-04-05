#include <bits/stdc++.h>

using namespace std;


int lis(int *input, int n) {
	int *output = new int[n];
	output[0] = 1;

	for (int i = 1; i < n; i++) {
		output[i] = 1;
		for (int j = i - 1; j >= 0; j--) {
			if (input[j] > input[i]) {
				continue;
			}
			else {
				int possibleAns = output[j] + 1;
				if (possibleAns > output[i]) {
					output[i] = possibleAns;
				}
			}
		}
	}

	int bestAns = 0;
	for (int i = 0; i < n; i++) {
		if (output[i] > bestAns)
			bestAns = output[i];
	}

	delete [] output;
	return bestAns;
}


int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	/* n = 7
	 4 3 9 7 6 8 20
	 ans = 4 ( 3 6 8 20 || 4 7 8 20 ...) */

	int n; cin >> n;

	int *input = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	int ans = lis(input, n);
	cout << ans << endl;

	delete [] input;


	return 0;
}