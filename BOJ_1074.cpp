#include<iostream>
#include<vector>

using namespace std;

int pow(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= 2;
    }
    return result;
}

int r, c;

void solve(int x_st, int x_ed, int y_st, int y_ed, int& count) {
    if (!(r + 1 >= x_st && r + 1 <= x_ed && c + 1 >= y_st && c + 1 <= y_ed)) {
        count += (x_ed - x_st + 1) * (y_ed - y_st + 1);
        return;
    }
    if (x_st == x_ed && y_st == y_ed) {
        if (r + 1 == x_st && c + 1 == y_st) {
            cout << count << endl;
            return;
        }
        count++;
        return;
    }
    solve(x_st, (x_st + x_ed) / 2, y_st, (y_st + y_ed) / 2, count);
    solve(x_st, (x_st + x_ed) / 2, (y_st + y_ed) / 2 + 1, y_ed, count);
    solve((x_st + x_ed) / 2 + 1, x_ed, y_st, (y_st + y_ed) / 2, count);
    solve((x_st + x_ed) / 2 + 1, x_ed, (y_st + y_ed) / 2 + 1, y_ed, count);
}

int main(void) {
    int N, count = 0;
    cin >> N >> r >> c;
    int size = pow(N);
    solve(1, size, 1, size, count);
    return 0;
}
