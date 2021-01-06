#include<iostream>
#include<string>
#include<map>

using namespace std;

using line = 
struct Line {
    int zeroCnt;
    int quan;
};

map<string, line> board;

int countZero(string str) {
    int cnt = 0;

    for (char ch : str) {
        if ( ch == '0' ) cnt++;
    }
    return cnt;
}

int main(void) {
    int n, m, T, MAX = 0, resultMax = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if ( board.find(str) == board.end() ) {
            int zeroCnt = countZero(str);
            board.insert(pair<string, line>(str, { zeroCnt, 1}));
            MAX = MAX > zeroCnt ? MAX : zeroCnt;
        } else {
            board[str].quan++;
        }
    }
    cin >> T;

    for(auto& iter : board) {
        if ( iter.second.zeroCnt % 2 == ( T % 2 ) && iter.second.zeroCnt <= T ) {
            resultMax = resultMax > iter.second.quan ? resultMax : iter.second.quan;
        }
    }
    cout << resultMax << endl;
    return 0;
}