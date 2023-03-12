#include<vector>
#include<iostream>
using namespace std;



// optimal approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize= matrix.size();
        int colSize = matrix[0].size();
         int col0 = 1;
        for(int row =0; row< rowSize; row++){
            if ( matrix[row][0] ==0 ) col0 = 0;
            for(int col=1; col <colSize ; col++){
              if(matrix [row][col] ==0){
                  matrix[row][0] = matrix[0][col] =0;
              }
            }
        }

        for(int row = rowSize -1; row >=0; row--){
            for(int col = colSize-1; col >0; col--){
                if( matrix[row][0]== 0|| matrix[0][col] ==0)
                  matrix[row][col] = 0;   
                   
            }
            if(col0 ==0)
                  matrix[row][0]=0;
             
        }
    }
};