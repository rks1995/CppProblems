#include<bits/stdc++.h>

using namespace std;

int main(){
   int n,x =0; cin >> n;
   string arr[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
      if(arr[i] == "++X" || arr[i] == "X++")
         x++;
      else
         x--;
   }
   cout << x << endl;

}
