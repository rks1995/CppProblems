#include <bits/stdc++.h>

using namespace std;

bool poweroftwo(int x) {
	return (x && !(x & (x - 1)));
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 0; i <= 10; i++) {
		bool ans = poweroftwo(i);
		cout << ans << endl;
	}

	return 0;
}