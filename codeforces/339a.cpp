#include <bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin >>s;
   vector<int>V;
   for(int i=0; i<s.length(); i++){
      if(s[i] == '+')
         continue;
      V.push_back(s[i]-'0');
   }

   sort(V.begin(), V.end());
   string ans;
   for(int v: V){
      char c = v+'0';
      ans+= c;
      ans += '+';
   }
   cout << ans.substr(0, ans.length()-1) << endl;
   return 0;
}

