#include <bits/stdc++.h>
#define MAX 5
using namespace std;

//start with 0,0
//explore all four direction
//make a visited array set to false
//if it can traverse from (i,j), then mark that cell as visited, and from that
//point start exoloring 
//if it cannot traverse , explore different direction,
//traverse until it reaches (n-1, n-1)

vector<string> Mze(int maze[MAX][MAX], int n);

bool isSafe(int row, int col, int maze[MAX][MAX], int n, bool visited[n][MAX]){
   if(row<0 || row == n || col < 0 || col == n || visited[row][col] || maze[row][col] == 0)
      return false;
   return true;
}

void solveMaze(int maze[MAX][MAX], int n, int row, int col, vector<string> &res, string path, bool visited[n][MAX]){
   //base condition
   if(row<0 || row == n || col<0 || col==n || visited[row][col] || maze[row][col]==0)
      return;
   
   if(row == n-1 && col == n-1){
      res.push_back(path);
      return;
   }
   visited[row][col] = true;
   //explore up, down, right, left;
   if(isSafe(row+1, col, maze, n, visited)){
      path.push_back('D');
      solveMaze(maze, n, row+1, col, res, path, visited);
      path.pop_back();
   }
   
   if(isSafe(row, col-1, maze, n, visited)){
      path.push_back('L');
      solveMaze(maze, n, row, col-1, res, path, visited);
      path.pop_back();
   }

   if(isSafe(row, col+1, maze, n, visited)){
      path.push_back('R');
      solveMaze(maze, n, row, col+1, res, path, visited);
      path.pop_back();
   }

   if(isSafe(row-1, col, maze, n, visited)){
      path.push_back('U');
      solveMaze(maze, n, row-1, col, res, path, visited);
      path.pop_back();
   }

   
   visited[row][col] = false;

}

vector<string> Mze(int maze[MAX][MAX], int n){
   vector<string> res;
   string path;
   bool visited[n][MAX];
   memset(visited, false, sizeof(visited));
   solveMaze(maze, n, 0, 0, res, path, visited);
   return res;
}

int main(){

   int n; cin >> n;
   int maze[MAX][MAX];
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         cin >> maze[i][j];
      }
   }
   vector<string> res = Mze(maze, n);
   
   if(res.size()==0){
      cout<< "-1" << endl;
}else{
   for(int i=0; i<res.size(); i++){
      cout << res[i] << " ";
   }
}

}
