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

int N, M;
vector<vector<int>> v(100, vector<int>(100, 0));

void bfs() {
	vector<vector<int>> visit(N, vector<int>(M, 0));
	queue<int> qx, qy;
	qx.push(0);
	qy.push(0);
	visit[0][0] = 1;
	while (1) {
		int x = qx.front();
		qx.pop();
		int y = qy.front();
		qy.pop();
		if (x == (N - 1) && y == (M - 1))
			break;
		if (x > 0 && visit[x - 1][y] == 0 && v[x - 1][y] == 1) {
			qx.push(x - 1);
			qy.push(y);
			visit[x - 1][y] = visit[x][y] + 1;
		}
		if (x < (N - 1) && visit[x + 1][y] == 0 && v[x + 1][y] == 1) {
			qx.push(x + 1);
			qy.push(y);
			visit[x + 1][y] = visit[x][y] + 1;
		}
		if (y > 0 && visit[x][y - 1] == 0 && v[x][y - 1] == 1) {
			qx.push(x);
			qy.push(y - 1);
			visit[x][y - 1] = visit[x][y] + 1;
		}
		if (y < (M - 1) && visit[x][y + 1] == 0 && v[x][y + 1] == 1) {
			qx.push(x);
			qy.push(y + 1);
			visit[x][y + 1] = visit[x][y] + 1;
		}
	}
	printf("%d\n", visit[N - 1][M - 1]);
}
int main(void) {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%1d", &v[i][j]);
	bfs();
//	system("pause");
	return 0;
}