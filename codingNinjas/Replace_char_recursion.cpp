#include <bits/stdc++.h>

#define ll                   long long
#define pb                    push_back
#define mp                    make_pair
#define vi                    vector<int>
#define mii                   map<int, int>
#define inf                   1e18
#define mk(arr, n, type)	  type *arr = new type(n)
#define MAX	  				  1000000000

using namespace std;

void removeConsecutiveDuplicates(char *input) {
	if (input[0] == '\0') {
		return;
	}
	if (input[0] != input[1]) {
		removeConsecutiveDuplicates(input + 1);
	}
	else {
		int i = 1;
		for (; input[i] != '\0'; i++) {
			input[i - 1] = input[i];
		}
		input[i - 1] = '\0';
		removeConsecutiveDuplicates(input);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char s[100000];
	cin >> s;
	removeConsecutiveDuplicates(s);
	cout << s << endl;
}