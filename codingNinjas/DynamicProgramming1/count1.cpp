#include <iostream>

using namespace std;

int count1(int *a, int n) {
	if (n == 1 && a[0] != 1)
		return 0;
	if (n == 1 && a[0] == 1)
		return 1;
	if (a[0] != 1) {
		return count1(a + 1, n - 1);
	} else {
		return 1 + count1(a + 1, n - 1);

	}

}

int main() {
	int a[] = {1, 1, 0, 1, 1};
	cout << count1(a, 5) << endl;
}