#include <bits/stdc++.h>

using namespace std;

void printAllPermutation(string s, int l, int r){
   
   if(l==r)
      cout << s << endl;

   for(int i=l; i<=r; i++){
      swap(s[l], s[i]);

      printAllPermutation(s, l+1, r);

      swap(s[l], s[i]);
   }
}

int main(){
  string s; cin >> s;
  int n = s.length();
  printAllPermutation(s, 0, n-1);
}
