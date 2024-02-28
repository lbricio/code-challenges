class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> validate_line;
        unordered_set<char> validate_col;
        
        for (int i=0; i<9; i++) {
            //validar linhas
            validate_line.clear();
            for (int j=0; j<9; j++) {
                if (board[i][j] != '.') {
                    if (validate_line.find(board[i][j]) == validate_line.end())
                        validate_line.insert(board[i][j]);
                    else
                        return false;
                }
            }
            //validar colunas
            validate_col.clear();
            for (int j=0; j<9; j++) {
                if (board[j][i] != '.') {
                    if (validate_col.find(board[j][i]) == validate_col.end())
                        validate_col.insert(board[j][i]);
                    else
                        return false;
                }
            }
        }

        // validar caixas 3x3
        for (int box=0; box<9; box++) {
            validate_line.clear();
            int pos_x = 3 * (box / 3);
            int pos_y = 3 * (box % 3);
            for (int x=0; x<3; x++) {
                for (int y=0; y<3; y++) {
                    if (board[pos_x+x][pos_y+y] != '.') {
                        if (validate_line.find(board[pos_x+x][pos_y+y]) == validate_line.end())
                            validate_line.insert(board[pos_x+x][pos_y+y]);
                        else
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
