#include<iostream>
using namespace std;
const int N = 9;

void printBoard(int grid[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int grid[N][N], int row, int col, int num){
    
    for(int x = 0; x<N; x++){
        if (grid[row][x] == num)
           return false;
    }
    
    for(int x = 0; x<N; x++){
        if(grid[x][col] == num)
           return false;
    }
    
    int startRow = row-row%3;
    int startCol = col-col%3;
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(grid[startRow+i][startCol+j] == num)
                return false;
        }
    }
    return true;
}

void solveSudoku(int grid[N][N], int &count){
    int row = -1;
    int col = -1;
    bool empty = false;
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(grid[i][j] == 0){
                row = i;
                col = j;
                empty = true;
                break;
            }
        }
        
        if(empty)
            break;
    }
    
    if(!empty){
        count++;
        cout<<endl;
        cout<<"Solution: "<<count<<endl;
        printBoard(grid);
        return;
    }
    
    for(int num = 1; num<= 9; num++){
        if(isSafe(grid,row,col,num)){
            grid[row][col] = num;
            
            solveSudoku(grid,count);
            grid[row][col] = 0;
        }
    }
}

int main(){
    int grid[N][N];
    cout<<"Enter sudoku (Use 0 for empty cells): \n";
    
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin>>grid[i][j];
            
            if(grid[i][j] < 0 || grid[i][j] > 9){
            cout<<"Invalid Input! Enter values between 0 & 9\n";
            return 0;
            }
        }
    }
    
    int count = 0;
    
    solveSudoku(grid,count);
    
    if(count == 0)
        cout<<"No solution exist";
    else
        cout<<"Total solutions: "<<count<<endl;
        
    return 0;
}


















