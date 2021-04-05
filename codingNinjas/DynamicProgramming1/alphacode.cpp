// 1 1 2 3
/* a a b c
   a l c
   a a w
   k b c
   k w
*/

#include <iostream>

using namespace std;

/*int alphacode(int *arr, int size, int *dp) {
	if (size == 0 || size == 1) {
		return 1;
	}
	if (dp[size] > 0) {
		return dp[size];
	}
	int output = alphacode(arr, size - 1, dp);
	if (arr[size - 2] * 10 + arr[size - 1] <= 26) {
		output += alphacode(arr, size - 2, dp);
	}
	dp[size] = output;
	return output;
}*/

int alphacode_i(int *arr, int size) {
	int *output = new int[size + 1];
	output[0] = 1;
	output[1] = 1;

	for (int i = 2; i <= size; i++) {
		if (arr[i] == 0) {
			output[i] = 0;
		}
		if (arr[i] * 10 + arr[i + 1] > 26) {
			output[i] = 0;
		}
		output[i] = output[i - 1];
		if (arr[i - 2] * 10 + arr[i - 1] <= 26) {
			output[i] += output[i - 2];
		}
	}

	int ans = output[size];
	delete [] output;
	return ans;
}


int main() {
	int size;
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++) {
		int x; cin >> x;
		arr[i] = x;
	}
	// int *dp = new int[size + 1];
	// cout << alphacode(arr, size, dp) << endl;
	// delete [] dp;

	cout << alphacode_i(arr, size) << endl;

	return 0;
}

