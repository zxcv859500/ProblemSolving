#include<iostream>
#include<vector>

using namespace std;

int pow(int n) {
    int result = 2;
    for (int i = 0; i < n; i++) {
        result *= 2;
    }
    return result;
}

int count = 0;

void solve(vector<vector<int>>& board, int x_st, int x_ed, int y_st, int y_ed) {
    if (x_st == x_ed && y_st == y_ed) {        
        board[x_st][y_st] = count++;
        return;
    }
    solve(board, x_st, (x_st + x_ed) / 2, y_st, (y_st + y_ed) / 2);
    solve(board, (x_st + x_ed) / 2, x_ed, y_st, (y_st + y_ed) / 2);    
    solve(board, x_st, (x_st + x_ed) / 2, (y_st + y_ed) / 2, y_ed);
    solve(board, (x_st + x_ed) / 2, x_ed, (y_st + y_ed) / 2, y_ed);
}

int main(void) {
    int N, r, c;
    cin >> N, r, c;
    int size = pow(N);
    vector<vector<int>> board(size + 1, vector<int>(size + 1));
    solve(board, 1, N, 1, N);
    cout << board[r][c];
    return 0;
}