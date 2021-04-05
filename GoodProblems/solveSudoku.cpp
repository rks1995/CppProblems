#include <bits/stdc++.h>

#define N 9
using namespace std;

// find empty position
// if not found then return true
// if found, explore that position with value 1 to 10
// while exploring check if that 
// value is present in col, row, and 3*3 matrix
// if not present, put that value in that position and further call sudoku
// if it returns true, that value is ok then sudoku func will also return true,
// if not , make that position empty and further explore
// if no value from 1 to 9 can be placed thn return false;

bool findEmptyPosition(int board[N][N], int &row, int &col){
   for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
         if(board[i][j] == 0){
            row = i;
            col = j;
            return true;
         }
      }
   }
   return false;
}

bool isSafe(int board[N][N], int row, int col, int v){
   for(int r = 0; r<N; r++){
      if(board[r][col] == v)
         return false;
   }
   for(int c = 0; c<N; c++){
      if(board[row][c] == v)
         return false;
   }

   int rowFactor = row-(row%3);
   int colFactor = col-(col%3);
   for(int r=0; r<3; r++){
      for(int c=0; c<3; c++){
         //if row = 6, col = 4, thn r will range from r+(rowFactor), c will range from
         //c+(colFactor);
         if(board[r+rowFactor][c+colFactor] == v)
            return false;
      }
   }
   return true;
}

bool solveSudoku(int board[N][N]){
   int row, col; 
   if(!findEmptyPosition(board, row, col)){
     return true; 
   }
   
   for(int i=1; i<=9; i++){
      if(isSafe(board, row, col, i)){
         board[row][col] = i;
         if(solveSudoku(board)){
            return true;
         }
         board[row][col] = 0;
      }
   }
   return false;
}

int main(){
   int tt; cin >> tt;
   while(tt--){
      int board[N][N] = {0};
      for(int i=0; i<N; i++){
         for(int j=0; j<N; j++){
              cin >> board[i][j];
         }
      }
      solveSudoku(board);
      for(int i=0; i<N; i++){
         for(int j=0; j<N; j++){
            cout << board[i][j] << " ";
         }
      }
      cout << endl;
   }
}
