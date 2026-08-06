class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for(int row = 0; row< numRows; row++){
            vector<int> currentRow(row+1,1);

            for(int col=1; col< row; col++){
                currentRow[col] = result[row-1][col-1] +result[row-1][col];
            }
            result.push_back(currentRow);
        }
        return result;
    }
};