#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<cmath>
#include<string>
#include<algorithm>
#include<cstring>
#include<functional>
#include<cstdio>
#include<stack>

#pragma warning(disable:4996)

#define INTMAX 0x7fffffff
#define gets(x) cin.getline(x,sizeof(x))
#define square(x) (x)*(x)
using namespace std;

using lld = long long;
using pii = pair<int, int>;

int cnt, T, M, N, K;
int arr[51][51] = { 0, };

void solve(int i, int j) {
	if (i > M-1 || i < 0) return;
	if (j > N-1 || j < 0) return;
	if (arr[i][j] == 0)
		return;
	arr[i][j] = 0;
	solve(i + 1, j);
	solve(i, j + 1);
	solve(i - 1, j);
	solve(i, j - 1);
}
int main(void) {
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d", &M, &N, &K);
		for (int i = 0; i < K; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			arr[a][b] = 1;
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j]) {
					cnt++;
					solve(i, j);
				}
			}
		}
		printf("%d\n", cnt);
		memset(arr, 0, sizeof(arr));
		cnt = 0;
	}
	system("pause");
	return 0;
}