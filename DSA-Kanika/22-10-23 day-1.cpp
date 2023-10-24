// https://leetcode.com/problems/set-matrix-zeroes/description/

//my approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        vector<int> rows,columns;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    columns.push_back(j);
                }
            }
        }
        for(int i=0;i<rows.size();i++){
            for(int a=0;a<row;a++){
                matrix[a][columns[i]]=0;
            }
            for(int b=0;b<column;b++){
                matrix[rows[i]][b]=0;
            }
        }
    }
};

//after seeing the video and implementing the optimal approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size(),col0=1;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0){
                    //mark the row
                    matrix[i][0]=0;
                    //mark the column
                    if(j!=0) matrix[0][j]=0;
                    else col0=0;
                }
            }
        }
        for(int i=1;i<row;i++){
            for(int j=1;j<column;j++){
                if(matrix[i][j]!=0){
                    //check for col & row if marked then convert to 0
                    if(matrix[0][j]==0||matrix[i][0]==0)
                        matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            //because the first row is dependent on the first rowth element
            for(int j=1;j<column;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
    }
};