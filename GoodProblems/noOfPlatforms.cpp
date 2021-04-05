#include <bits/stdc++.h>

using namespace std;

bool comparator(pair<int, char> &a, pair<int , char> &b){
   return a.first < b.first;
}
int findPlatform(int ari[], int dep[], int n){
   vector< pair<int,char> >time;
   for(int i=0; i<n; i++){
      time.push_back(make_pair(ari[i],'A'));
      time.push_back(make_pair(dep[i],'D'));
   }

   sort(time.begin(), time.end(), comparator);
   
   vector<int>v;
   vector<pair<int, char> > :: iterator it;
   for( it=time.begin(); it!=time.end(); it++){
      if(it->second == 'A')
         v.push_back(1);
      else if(it->second == 'D')
         v.push_back(-1);
      
      }
    
    int platform = 1, count = v[0];
    for(int i=1; i<v.size(); i++){
       count += v[i];
       platform = max(platform, count);
    }

    return platform;
}

int main(){
  int n; cin >> n;
  int ari[n], dep[n];
  for(int i=0; i<n; i++){
    cin >> ari[i];
  }
  for(int i=0; i<n; i++){
    cin >> dep[i];
  }

  cout << findPlatform(ari, dep, n) << endl;

}
