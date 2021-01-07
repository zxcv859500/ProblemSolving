#include<iostream>
#include<vector>

using namespace std;

using lld = long long;

vector<vector<lld>> pop(15, vector<lld>(15));

int main(void) {
    int T, k, n;
    for(int i = 1; i <= 14; i++) {
        pop[0][i] = i;
    }
    for(int i = 1; i < 15; i++) {
        for (int j = 1; j <= 14; j++) {
            for (int z = 1; z <= j; z++) {
                pop[i][j] += pop[i - 1][z];
            }
        }
    }
    cin >> T;
    while(T--) {
        cin >> k >> n;
        cout << pop[k][n] << endl;
    }
    return 0;
}