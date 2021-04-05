#include <bits/stdc++.h>

using namespace std;

bool check(string s, string p) {
	for (int i = 0; i <= (s.size() - p.size()); i++) {
		int flag = 1;
		for (int j = i, k = 0; k < p.size(); k++, j++) {
			if (s[j] != p[k]) {
				flag = 0;
				break;
			}
		}
		if (flag) return true;
	}
	return false;
}

int main() {
	string s, p;
	cin >> s >> p;

	//Naive approach
	cout << check(s, p) << endl;
	return 0;
}