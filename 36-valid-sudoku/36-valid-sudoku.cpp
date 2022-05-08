class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0}, columns[9][9] = {0}, subBoxes[9][9] = {0};
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] != '.'){
                    int currentNumCheck = board[i][j] - '0' - 1;
                    int subMatrix = i / 3 * 3 + j / 3;
                    if(rows[i][currentNumCheck] || columns[j][currentNumCheck] || subBoxes[subMatrix][currentNumCheck]){
                        return false;
                    }
                    rows[i][currentNumCheck] = columns[j][currentNumCheck] = subBoxes[subMatrix][currentNumCheck] = 1; 
               
                }
            }
        }
        return true;
    }
};