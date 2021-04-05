#include <bits/stdc++.h>

using namespace std;


long long repeatedString(string s, long long n) {

	int *repeated_count = new int[s.length()];
	repeated_count[0] = (s[0] == 'a') ? 1 : 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == 'a')
			repeated_count[i] = repeated_count[i - 1] + 1;
		else
			repeated_count[i] = repeated_count[i - 1];
	}

	long long k = n / s.length(); // this will count how many repeatation needed
	long long r = n % s.length(); // this will tell the remainder count
	int remainder_count = (r == 0) ? 0 : repeated_count[r - 1];
	long long count = repeated_count[s.length() - 1] * k + remainder_count;
	delete [] repeated_count;
	return count;
}


int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	long long n; cin >> n;
	long long count_a = repeatedString(s, n);
	cout << count_a << endl;
	return 0;
}