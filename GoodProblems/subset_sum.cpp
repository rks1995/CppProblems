#include <bits/stdc++.h>

using namespace std;

bool isSubsetPresent(int* arr, int n, int target){
   if(target == 0)
      return true;
   if(n==0 && target != 0)
      return false;
   if(arr[0] > target)
     return isSubsetPresent(arr+1, n-1, target);
   else{
      return isSubsetPresent(arr+1, n-1, target-arr[0]) || isSubsetPresent(arr+1, n-1, target);
      }

   return false;
}

bool ssDp(int *arr, int n, int target){
   bool **dp = new bool*[n+1];
   for(int i=0; i<=n; i++){
      dp[i] = new bool[target+1];
   }
   
   for(int i=0; i<=target; i++){
      dp[0][i] = false;
   }
   for(int i=0; i<=n; i++){
      dp[i][0] = true;
   }

   for(int i=1; i<=n; i++){
      for(int j=1; j<=target; j++){
         dp[i][j] = dp[i-1][j];
         if(j>= arr[i-1])
            dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
         
      }
   }

   bool ans = dp[n][target];
   for(int i=0; i<=n; i++){
      delete [] dp[i];
   }
   delete [] dp;
  
   return ans;
}

bool ssDpExt(int *arr, int n, int target){
   bool **dp = new bool*[2];
   for(int i=0; i<=1; i++){
      dp[i] = new bool[target+1];
   }
   
   for(int i=0; i<=target; i++){
      dp[0][i] = false;
   }
   dp[0][0] = true;
   int flag = 1;
   for(int i=1; i<=n; i++){
      for(int j=1; j<=target; j++){
         dp[flag][j] = dp[flag^1][j];
         if(j>= arr[i-1])
            dp[flag][j] = dp[flag][j] || dp[flag^1][j-arr[i-1]];
      }
      flag = flag^1;
   }

   bool ans = dp[flag^1][target];
   for(int i=0; i<=1; i++){
      delete [] dp[i];
   }
   delete [] dp;
  
   return ans;
}
int main(){
   int n; cin >> n;
   int *arr = new int[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   int target; cin >> target; 

   if(isSubsetPresent(arr, n, target))
      cout << "Yes\n";
   else
      cout << "No\n";

   if(ssDp(arr, n, target))
      cout << "Yes\n";
   else
      cout << "No\n";

   if(ssDpExt(arr, n, target))
      cout << "Yes\n";
   else
      cout << "No\n";
}
