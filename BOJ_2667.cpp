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

using namespace std;

#pragma warning(disable:4996)

#define INTMAX 0x7fffffff
#define gets(x) cin.getline(x,sizeof(x))
#define getstr(x) getline(cin,x)
#define square(x) (x)*(x)

vector<vector<int>> v(25, vector<int>(25, 0));
vector<vector<bool>> visit(25, vector<bool>(25, false));
int N;
vector<int> res(625, 0);
int cnt = 0;

int px[] = { -1,1,0,0 };
int py[] = { 0,0,-1,1 };
void dfs(int x, int y) {
	if (v[x][y] == 1) {
		v[x][y] = 0;
		res[cnt]++;
	}
	else
		return;
	for (int i = 0; i < 4; i++) {
		int tmpx = x + px[i], tmpy = y + py[i];
		if (tmpx >= 0 && tmpx < N && tmpy >= 0 && tmpy < N && !visit[tmpx][tmpy])
			dfs(tmpx, tmpy);
	}
}
int main(void) {
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%1d", &v[i][j]);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v[i][j] == 1 && !visit[i][j]) {
				dfs(i, j);
				cnt++;
				visit[i][j] = true;
			}
		}
	}
	cout << cnt << endl;
	sort(res.begin(), res.begin() + cnt);
	for (int i = 0; i < cnt; i++)
		cout << res[i] << endl;
//	system("pause");
	return 0;
}