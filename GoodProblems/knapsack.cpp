#include<bits/stdc++.h>

using namespace std;
//knapsack(recursive solution , expo time complexit)
int knapsack(int *wt, int *value, int n, int W){
   //base case
   if(n==0 || W == 0)
      return 0;

   if(wt[0] <= W){
      int option1 = value[0] + knapsack(wt+1, value+1, n-1, W-wt[0]);
      int option2 = knapsack(wt+1, value+1, n-1, W);
      return max(option1, option2);
   }
   else{
      return knapsack(wt+1, value+1, n-1, W);
   }
}
// knapsack iterative solution
int knapsackI(int *wt, int *value, int n, int W){
   int **dp = new int*[n+1];
   for(int i=0; i<=n; i++){
      dp[i] = new int[W+1];
   }

   for(int i=0; i<=W; i++){
      dp[0][i] = 0;
   }
   for(int i=0; i<=n; i++){
      dp[i][0] = 0;
   }
   
   for(int i=1; i<=n; i++){
      for(int w=1; w<=W; w++){
         if(wt[i-1] <= w){
            dp[i][w] = max(value[i-1] + dp[i-1][W-wt[i-1]], dp[i-1][w]);
         }
         else{
            dp[i][w] = dp[i-1][w];
         }
      }
   }

  int ans = dp[n][W];
  for(int i=0; i<=n; i++){
      delete [] dp[i];
  }
  delete [] dp;

  return ans;
}


//knacksack(recursive + memoitization)
int helper(int *wt, int*value, int n, int W, int **dp){
   if(n==0 || W == 0)
      return 0;

   if(dp[n][W] > -1){
      return dp[n][W];
   }
   if(wt[0] <= W){
      int option1 = value[0] + helper(wt+1, value+1, n-1, W-wt[0], dp);
      int option2 = helper(wt+1, value+1, n-1, W, dp);
      int ans = max(option1, option2);
      dp[n][W] = ans;
      return ans;
   }
   else{
      int ans = helper(wt+1, value+1, n-1, W, dp);
      dp[n][W] = ans;
      return ans;
   }
}

int knapsackDp(int *wt, int*value, int n, int W){
   int **dp = new int*[n+1];
   for(int i=0; i<=n; i++){
      dp[i] = new int[W+1];
      for(int j=0; j<=W; j++){
         dp[i][j] = -1;
      }
   }
   
   int ans = helper(wt, value, n, W, dp);
   for(int i=0; i<=n; i++){
      delete [] dp[i];
   }
   delete [] dp;

   return ans;
}


int main(){
   int n; cin >> n;
   int *wt = new int[n];
   int *value = new int[n];
   for(int i=0; i<n; i++){
      cin >> wt[i];
   }
   for(int i=0; i<n; i++){
      cin >> value[i];
   }
   int W; cin >> W;
   cout << knapsackDp(wt, value, n, W) << endl;
   cout << knapsackI(wt, value, n, W) << endl;
   cout << knapsack(wt, value, n, W) << endl;
   
   delete []wt;
   delete [] value;
}
