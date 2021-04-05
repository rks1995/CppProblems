#include <iostream>

using namespace std; 

int lis(int *arr, int n){
   int* output = new int[n];
   output[0] = 1;
   for(int i=1; i<n; i++){
      output[i] = 1;
      for(int j=i-1; j>0; j--){
         if(arr[i] < arr[j])
            continue;
         int possibleAns = output[j] + 1;
         if(possibleAns > output[i])
            output[i] = possibleAns;
      }
   }

  // for(int i=0; i<n; i++)
    // cout << output[i] << " ";
   int ans = 0;
   for(int i=0; i<n; i++){
      ans = max(output[i], ans);
   }

   delete [] output;
   return ans;
}

int main(){
   int n; cin >> n;
   int *arr = new int[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   cout << lis(arr, n) << endl;

   delete [] arr;

}
