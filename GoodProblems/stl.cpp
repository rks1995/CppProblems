#include<bits/stdc++.h>

using namespace std;

int main(){
   set<int> s;
   s.insert(5);
   s.insert(4);

   vector<int> v;
   v.push_back(5);
   v.push_back(4);

   for(int e: s) cout << e << " ";
   cout << endl;

   for(int e: v) cout << e << " ";
   cout << endl;
}
