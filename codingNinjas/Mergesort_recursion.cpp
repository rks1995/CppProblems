#include <bits/stdc++.h>

using namespace std;

void merge(int input[], int si, int mid, int ei) {
	int i = si, j = mid;
	int k = 0;
	int temp[ei - si + 1];
	while (i < mid && j <= ei) {
		if (input[i] <= input[j]) {
			temp[k++] = input[i++];
		}
		else {
			temp[k++] = input[j++];
		}
	}
	while (i < mid) {
		temp[k++] = input[i++];
	}
	while (j <= ei) {
		temp[k++] = input[j++];
	}
	for (int i = si, k = 0 ; i <= ei; i++, k++) {
		input[i] = temp[k];
	}
	return;
}
void merge_sort(int input[], int si, int ei) {
	if (si >= ei) {
		return;
	}
	if (ei > si) {
		int mid = si + (ei - si) / 2;
		merge_sort(input, si, mid);
		merge_sort(input, mid + 1, ei);
		merge(input, si, mid + 1, ei);
	}
	return;
}

void mergeSort(int input[], int size) {
	merge_sort(input , 0, size - 1);
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int length;
	cin >> length;
	int* input = new int[length];
	for (int i = 0; i < length; i++)
		cin >> input[i];
	mergeSort(input, length);
	for (int i = 0; i < length; i++) {
		cout << input[i] << " ";
	}
}