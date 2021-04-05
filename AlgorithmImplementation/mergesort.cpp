#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> left, vector<int> right)
{
	size_t i = 0, j = 0;
	vector<int> temp;
	while (i < left.size() && j < right.size())
	{
		if (left[i] <= right[j])
		{
			temp.push_back(left[i++]);
		}
		else
		{
			temp.push_back(right[j++]);
		}
	}
	while (i < left.size())
	{
		temp.push_back(left[i++]);
	}
	while (j < right.size())
	{
		temp.push_back(right[j++]);
	}
	return temp;
}

vector<int> mergesort(vector<int> &array)
{
	if (array.size() == 1)
	{
		return array;
	}
	int mid = array.size() / 2;
	vector<int> left(array.begin(), array.begin() + mid);
	vector<int> right(array.begin() + mid, array.end());

	return merge(mergesort(left), mergesort(right));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::vector<int> v;
	v.push_back(10);
	v.push_back(9);
	v.push_back(8);
	v.push_back(7);
	v.push_back(6);
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	vector<int> result = mergesort(v);
	for (auto val : result)
	{
		cout << val << " ";
	}
	return 0;
}
