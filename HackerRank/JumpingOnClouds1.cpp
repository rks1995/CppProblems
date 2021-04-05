#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define mii map<int, int>
#define inf 1e18
#define mk(arr, n, type) type *arr = new type(n)
#define MAX 1000000000

using namespace std;

int jumpingOnTheClouds(int *clouds, int n)
{
	int min_jump = 0;
	int i = 0;
	while (i < n - 1)
	{
		if (clouds[i + 1] == 0 && clouds[i + 2] != 0)
		{
			min_jump++;
			i++;
		}
		else if (clouds[i + 1] != 0 && clouds[i + 2] == 0)
		{
			min_jump++;
			i += 2;
		}
		else if (clouds[i + 1] == 0 && clouds[i + 2] == 0)
		{
			min_jump++;
			i += 2;
		}
	}
	return min_jump;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int clouds[n];
	for (int i = 0; i < n; i++)
	{
		cin >> clouds[i];
	}

	int ans = jumpingOnTheClouds(clouds, n);
	cout << ans;
}