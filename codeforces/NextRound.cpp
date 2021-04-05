#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int students = 0;
	int score[n];
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	int kth_score = score[k - 1];
	for (int i = 0; i < n; i++) {
		if (score[i] >= kth_score && score[i] != 0)
			students++;
	}

	cout << students << endl;



	return 0;
}