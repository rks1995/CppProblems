#include <bits/stdc++.h>

using namespace std;

int solve(string s1, string s2) {
	int n = s1.length();
	int **dp = new int*[n + 1];
	for (int i = 0; i <= n; i++) {
		dp[i] = new int[n + 1];
	}
	for (int i = 0; i <= n; i++) {
		dp[0][i] = 0;
	}
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (s1[i - 1] == s2[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int ans = dp[n][n];
	for (int i = 0; i <= n; i++) {
		delete [] dp[i];
	}
	delete [] dp;
	return ans;

}
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << solve(s1, s2) << endl;
}
