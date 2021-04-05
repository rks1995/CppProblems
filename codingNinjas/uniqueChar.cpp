#include <bits/stdc++.h>

#define ll                   long long
#define pb                    push_back
#define mp                    make_pair
#define vi                    vector<int>
#define mii                   map<int, int>
#define inf                   1e18
#define mk(arr, n, type)      type *arr = new type(n)
#define MAX                   1000000000


using namespace std;

char *uniqueChar(char *str) {
  bool freq[256] = {0};
  int st_ind = 0, res_index = 0;
  char temp;
  while (str[st_ind]) {
    temp = str[st_ind];
    if (freq[temp] == 0) {
      freq[temp] = 1;
      str[res_index] = str[st_ind];
      res_index++;
    }
    st_ind++;
  }
  str[res_index] = '\0';
  return str;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  char input[100000];
  cin >> input;
  cout << uniqueChar(input) << endl;

}