// https://leetcode.com/problems/set-matrix-zeroes/description/

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