#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<string> &v,int n, int row, int col){
   //horizontal check
   for(int i=row-1; i>=0; i--){
      if(v[i][col] == 'Q')
         return false;
   }
   //upper right diagonal check
   for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
      if(v[i][j] == 'Q')
         return false;
   }
   //upper left diagonal
   for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
      if(v[i][j] == 'Q')
         return false;
   }

   return true;
}

void helper(vector<vector<string> > &res, vector<string> &v, int n, int row){
   //check if we have filled all possible queen in respective row
   if(n == row){
      res.push_back(v);
      return;
   }

   //check if we can place the queen in the current row or not
   
   for(int col =0; col<n; col++){
      if(isPossible(v,n, row, col)){
         v[row][col] = 'Q';
         helper(res, v, n, row+1);
         v[row][col] = '.';
      }
   }

}
vector<vector<string> >nQueen(int n){
   vector<vector<string> >res;
   vector<string>v(n, string(n,'.'));
   helper(res, v, n, 0);
   return res;
}

int main(){
   int n; cin >> n;

   vector<vector<string> >res = nQueen(n);

   for(int i=0; i<res.size(); i++){
      for(int j=0; j<res[0].size(); j++){
         cout << res[i][j] << endl;
      }
      cout << "==========================" << endl;
   }
}
