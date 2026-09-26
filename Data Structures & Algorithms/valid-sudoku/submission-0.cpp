class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row_seen;
            unordered_set<char> col_seen;
            unordered_set<char> box_seen;

            for (int j = 0; j < 9; j++) {
                // 1. Check Row i
                char r_val = board[i][j];
                if (r_val != '.') {
                    if (row_seen.count(r_val)) return false;
                    row_seen.insert(r_val);
                }

                // 2. Check Column i
                char c_val = board[j][i];
                if (c_val != '.') {
                    if (col_seen.count(c_val)) return false;
                    col_seen.insert(c_val);
                }

                // 3. Check Box i
                int box_row = 3 * (i / 3) + (j / 3);
                int box_col = 3 * (i % 3) + (j % 3);
                char b_val = board[box_row][box_col];
                if (b_val != '.') {
                    if (box_seen.count(b_val)) return false;
                    box_seen.insert(b_val);
                }
            }
        }
        return true;
    }
};
