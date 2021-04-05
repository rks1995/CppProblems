#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin >> t;
   while(t--){
      int As, Bs; cin >> As >> Bs;
      int alice_score = 0, bob_score = 0;
      if(As == Bs){
         cout << alice_score << " " << bob_score+1 << endl;
      }
      else if(As > Bs){
          alice_score = As-Bs;
          bob_score++;
          cout << alice_score << " " << bob_score << endl;
      }
      else{
         bob_score = Bs-As + 1;
         cout << alice_score << " " <<bob_score << endl;
      }
   }
   return 0;
}

