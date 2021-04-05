#include <bits/stdc++.h>

#define ll  long long

using namespace std;

void sWap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int input[], int left, int right) {
	int pivot = input[right];
	int j = left, i = j - 1;
	while (j < right) {
		if (input[j] > pivot) {
			j++;
		}
		else {
			i++;
			sWap(&input[i], &input[j]);
			j++;
		}
	}
	i++;
	sWap(&input[i], &input[right]);
	return i;
}

void _quicksort(int input[], int left, int right) {
	if (right > left) {
		int p = partition(input, left, right);
		_quicksort(input, left, p - 1);
		_quicksort(input, p + 1, right);
	}
	return;
}

void quickSort(int input[], int size) {
	_quicksort(input, 0, size - 1);
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	int *input = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	quickSort(input, n);
	for (int i = 0; i < n; i++) {
		cout << input[i] << " ";
	}

	delete [] input;
}