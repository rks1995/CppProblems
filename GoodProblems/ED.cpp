#include <bits/stdc++.h>

using namespace std;

int ed(char* s1, char* s2) {
	if (s1[0] == '\0' || s2[0] == '\0') {
		return max(strlen(s1), strlen(s2));
	}
	if (s1[0] == s2[0])
		return ed(s1 + 1, s2 + 1);
	else {
		int replace = 1 + ed(s1 + 1, s2 + 1);
		int dlt = 1 + ed(s1 + 1, s2);
		int insert = 1 + ed(s1, s2 + 1);
		return min(replace, min(dlt, insert));
	}
}

int edDp(char* s1, char* s2, int m, int n, int **dp) {
	if (s1[0] == '\0' || s2[0] == '\0') {
		return max(m, n );
	}
	if (dp[m][n] > -1)
		return dp[m][n];
	if (s1[0] == s2[0])
		return edDp(s1 + 1, s2 + 1, m - 1, n - 1, dp);
	else {
		int replace = 1 + edDp(s1 + 1, s2 + 1, m - 1, n - 1, dp);
		int dlt = 1 + edDp(s1 + 1, s2, m - 1, n, dp);
		int insert = 1 + edDp(s1, s2 + 1, m, n - 1, dp);
		int ans = min(replace, min(dlt, insert));
		dp[m][n] = ans;
		return ans;
	}
}
int main() {
	char s1[100];
	char s2[100];
	cin >> s1 >> s2;
	int m = strlen(s1);
	int n = strlen(s2);
	int **dp = new int *[m + 1];
	for (int i = 0; i <= m; i++) {
		dp[i] = new int[n];
	}
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			dp[i][j] = -1;
		}
	}
	int ans = edDp(s1, s2, m, n, dp);
	for (int i = 0; i <= m; i++) {
		delete [] dp[i];
	}
	delete [] dp;
	cout << ans << endl;
	cout << ed(s1, s2) << endl;
}
