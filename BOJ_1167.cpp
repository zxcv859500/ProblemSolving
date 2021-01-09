#include<iostream>
#include<vector>

using namespace std;

int MAX = 0, T;

vector<pair<int, int>> dp;

int solve(vector<vector<pair<int, int>>>& tree, int v, int gen) {
    if (dp[v].first != 0 && dp[v].second != gen) return dp[v].first;
    int resultMax = 0, result = 0, off =  0;
    for (auto& iter : tree[v]) {
        if (iter.first != gen) {
            result = solve(tree, iter.first, v) + iter.second;
        }
        if (resultMax < result) {
            resultMax = result;
            off = iter.first;
        }
    }
    dp[v] = { resultMax, off };
    return resultMax;
}

int main(void) {
    cin >> T;
    vector<vector<pair<int, int>>> tree(T + 1);
    dp = vector<pair<int, int>>(T + 1, { 0, 0 });
    for (int i = 0; i < T; i++) {
        int v;
        cin >> v;
        while (1) {
            int num, dist;
            cin >> num;
            if (num == -1) break;
            cin >> dist;

            tree[v].push_back({ num, dist });
        }
    }

    for (int i = 0; i < T; i++) {
        int result = solve(tree, i + 1, i + 1);
        MAX = MAX > result ? MAX : result;
    }

    cout << MAX << endl;
}