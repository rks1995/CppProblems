#include <bits/stdc++.h>

using namespace std;

struct job{
   int id;
   int deadline;
   int profit;
};

bool comparator(job j1, job j2){
   return j1.profit > j2.profit;
}

pair<int,int> jsp(job jobs[], int n){
   //sorting the arr based on jobs
   sort(jobs, jobs+n, comparator);
   int arr[101]= {0};
   // 20-2, 15-2, 10-1, 5-3, 2-3
   // arr[2] = 20;
   // arr[2] > 0 : arr[1] > 0? arr[1] = 15: arr[i+1] < arr[2];
   int count = 0; //count jobs;
   int max_profit = 0;
   for(int i=0; i<n; i++){
      if(arr[jobs[i].deadline-1] > 0){
         int s = jobs[i].deadline-1;
         for(int j=s; j>=0; j--){
            if(arr[j] == 0){
               arr[j] = jobs[i].profit;
               count++;
               break;
            }
         }
      }
   
      else{
         arr[jobs[i].deadline-1] = jobs[i].profit;
         count++;
      }
   }

    for(int i=0; i<101; i++){
       max_profit += arr[i];
    }

    pair<int,int> ans = make_pair(count, max_profit);
    return ans;

}



int main(){
   int n; cin >> n;
   job jobs[n];
   for(int i=0; i<n; i++){
      int x, y, z;
      cin >> x >> y >> z;
      jobs[i].id = x;
      jobs[i].deadline = y;
      jobs[i].profit = z;
   }
   pair<int, int> ans = jsp(jobs, n);
   cout << ans.first << " " << ans.second << endl;
}

