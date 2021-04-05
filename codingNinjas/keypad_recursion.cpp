#include <iostream>
#include <string>

using namespace std;

int keypad(int num, string output[]) {
	if (num == 0 || num == 1) {
		//output[0] = "";
		return 1;
	}
	string map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	int n = num % 10; // last number call
	string s = map[n];
	int smallOutputSize = keypad(num / 10, output);
	int s_size = s.size();
	int copies = s_size - 1; //2 --> "abc" --> 2copies
	for (int i = 0, j = i + smallOutputSize; i < (smallOutputSize * copies); i++, j++) {
		output[j] = output[i];
	}
	int j = 0;
	int count = 0;
	for (int i = 0; i < s_size; i++) {
		for (; j < s_size * smallOutputSize; j++) {
			output[j] = output[j] + s[i];
			count ++;
			if (count >= smallOutputSize) {
				count = 0;
				j++;
				break;
			}
		}
	}
	return s_size * smallOutputSize;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num;
	cin >> num;
	string output[10000];
	int count = keypad(num, output);
	for (int i = 0; i < count && i < 10000; i++) {
		cout << output[i] << endl;
	}
	return 0;
}
