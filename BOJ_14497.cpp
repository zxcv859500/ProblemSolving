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

int st, fi, resx, resy, N, M;
vector<vector<char>> graph(301, vector<char>(301, 0));
int px[] = { -1,1,0,0 };
int py[] = { 0,0,-1,1 };
int cnt = 0;

void bfs() {
	queue<pair<int, int>> q;
	q.push({ st,fi });
	vector<vector<bool>> visit(301, vector<bool>(301, false));
	visit[st][fi] = true;
	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			pair<int, int> tmp = q.front();
			q.pop();
			int x = tmp.first, y = tmp.second;
			for (int i = 0; i < 4; i++) {
				int tmpx = x + px[i], tmpy = y + py[i];
				if (tmpx >= 1 && tmpx <= N && tmpy >= 1 && tmpy <= M && !visit[tmpx][tmpy]) {
					if (graph[tmpx][tmpy] == '0') {
						q.push({ tmpx,tmpy });
						visit[tmpx][tmpy] = true;
					}
					else if (graph[tmpx][tmpy] == '#') {
						cout << cnt + 1 << endl;
						return;
					}
					else if (graph[tmpx][tmpy] == '1') {
						visit[tmpx][tmpy] = true;
						graph[tmpx][tmpy] = '0';
					}
				}
			}
		}
	}
	cnt++;
	bfs();
}
int main(void) {
	cin >> N >> M >> st >> fi >> resx >> resy;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> graph[i][j];
	bfs();
	system("pause");
	return 0;
}