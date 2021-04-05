#include <iostream>
#include <string>

using namespace std;
int top = -1;

bool check(int *stack, int n, string s) {
	if (s == "")
		return true;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			top = top + 1;
			stack[top] = '(';
		}
		else {
			top--;
		}
	}
	return (top == -1) ? true : false;
}

int main() {

	int n; cin >> n;
	int *stack = new int[n];
	string s; cin >> s;
	string ans = (check(stack, n, s)) ? "balance" : "Not balance";
	cout << ans << endl;
	delete [] stack;
	return 0;
}