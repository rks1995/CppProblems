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

char getchar(int i) {
	return i + 'a';
}

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	map<char, int>pdfView;
	for (int i = 0; i < 26; i++) {
		char item = getchar(i);
		int mp; cin >> mp;
		pdfView.insert(pair<char, int>(item, mp));
	}
	string words; cin >> words;
	int max = 0;
	for (int i = 0; i < words.length(); i++) {
		if (pdfView[words[i]] > max) {
			max = pdfView[words[i]];
		}
	}
	cout << (max * words.length()) << endl;
}