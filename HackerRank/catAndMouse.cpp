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

int main() {
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int q;
	cin >> q;
	while (q--) {
		// void solve();
		int position[3];
		for (int i = 0; i < 3; i++) {
			cin >> position[i];
		}
		int catA_Dis = 0, catB_Dis = 0;
		catA_Dis = abs(position[2] - position[0]);
		catB_Dis = abs(position[2] - position[1]);
		if (catA_Dis < catB_Dis) {
			cout << "Cat A" << endl;

		}
		else if (catA_Dis > catB_Dis) {
			cout << "Cat B" << endl;
		} else {
			cout << "Mouse C" << endl;
		}

	}

}