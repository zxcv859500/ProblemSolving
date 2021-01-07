#include<iostream>
#include<string>
#include<vector>

#define INT_MAX 0x7fffffff;

using namespace std;

int diff(string str1, string str2) {
    int count = 0;

    for (int i = 0; i < 8; i++) {
        if (str1[i] != str2[i]) count++;
    }
    return count;
}

string cut(string str, int offset) {
    string result;
    for (int i = offset; i < offset + 8; i++) {
        result += str[i];
    }
    return result;
}

int main(void) {
    string pat1 = "WBWBWBWB";
    string pat2 = "BWBWBWBW";
    vector<string> board;
    int n, m, MIN = INT_MAX;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        board.push_back(input);
    }

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int cnt = 0;
            for (int z = 0; z < 8; z++) {
                string c = cut(board[i + z], j);

                if (z % 2 == 0) cnt += diff(c, pat1);
                else cnt += diff(c, pat2);
            }
            MIN = MIN < cnt ? MIN : cnt;
            cnt = 0;
        }
    }

    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            int cnt = 0;
            for (int z = 0; z < 8; z++) {
                string c = cut(board[i + z], j);

                if (z % 2 == 0) cnt += diff(c, pat2);
                else cnt += diff(c, pat1);
            }
            MIN = MIN < cnt ? MIN : cnt;
            cnt = 0;
        }
    }
    cout << MIN << endl;
    return 0;
}