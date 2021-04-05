#include <bits/stdc++.h>

using namespace std;

int count_one(int n) {
	int count = 0;
	while (n) {
		n = n & (n - 1); //this also calculate if the no. is in powerofTwo or not.
		count++;
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	for (int i = 31; i < 40; i++) {
		int ans = count_one(i);
		cout << ans << endl;
	}


	return 0;
}