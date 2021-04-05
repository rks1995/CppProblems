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
bool skillSort(vector<int> &skills, int start, int end) {
	// cout << start<<" " <<end<< '\n';
	if (start >= end)
	{
		return 1;
	}

	int n = skills.size();
	int mid = (start + end) / 2;

	int left = skillSort(skills, start, mid);
	int right = skillSort(skills, mid + 1, end);

	if (left != 1 || right != 1)
	{
		return 0;
	}

	if (skills[mid + 1] > skills[mid])
	{
		return 1;
	}

	// cout << "mid "<<skills[mid] << '\n';
	// cout << "mid+1 "<<skills[mid+1] << '\n';

	if (skills[mid] - skills[mid + 1] > 1)
	{
		return 0;
	}

	if (skills[mid + 1] < skills[mid])
	{
		swap(skills[mid], skills[mid + 1]);
	}
	return 1;


}


int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		//cout << "n "<<n << '\n';

		std::vector<int> skills;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			skills.push_back(temp);
		}

		if (skillSort(skills, 0, n - 1) == 1)
		{
			cout << "Yes" << '\n';
		} else {
			cout << "No" << '\n';
		}

	}



	return 0 ;



}