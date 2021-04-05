#include <iostream>

using namespace std;

int fib(int n, int *dp) {
	if (n == 0 || n == 1) {
		return 1;
	}
	if (dp[n] > 0) {
		return dp[n];
	}
	int output = fib(n - 1, dp) + fib(n - 2, dp);
	dp[n] = output;
	return output;
}

int main() {
	int n; cin >> n;
	int *dp = new int[n + 1];
	cout << fib(n, dp)  << endl;
	delete [] dp;
}