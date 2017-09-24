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

int N, M, cnt = 0, year = 0;
int px[] = { -1,1,0,0 };
int py[] = { 0,0,-1,1 };
vector<vector<int>> v(300, vector<int>(300, 0));
vector<vector<int>> tmp;
vector<vector<bool>> visit(300, vector<bool>(300, false));
int melt(int x, int y) {
	int num = 0;
	for (int i = 0; i < 4; i++) {
		int tmpx = x + px[i], tmpy = y + py[i];
		if (tmpx >= 0 && tmpx < N&&tmpy >= 0 && tmpy < M)
			if (tmp[tmpx][tmpy] == 0)
				num++;
	}
	return num;
}
void check(int x, int y) {
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int tmpx = x + px[i], tmpy = y + py[i];
		if (tmpx >= 0 && tmpx < N&&tmpy >= 0 && tmpy < M) {
			if (!visit[tmpx][tmpy] && tmp[tmpx][tmpy] != 0) {
				check(tmpx, tmpy);
			}
		}
	}
}
int main(void) {
	cin >> N >> M;
	bool flag = false;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> v[i][j];
	tmp.assign(v.begin(), v.end());
	while (1) {
		cnt = 0;
		//visit.clear();
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (v[i][j] != 0 && !visit[i][j]) {
					flag = true;
					cnt++;
					check(i, j);
				}
			}
		}
		if (!flag) {
			cout << "0" << endl;
			system("pause");
			return 0;
		}
		if (cnt >= 2) {
			cout << year << endl;
			system("pause");
			return 0;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (tmp[i][j] != 0) {
					v[i][j] -= melt(i, j);
					if (v[i][j] < 0) v[i][j] = 0;
				}
			}
		}
		flag = false;
		tmp.assign(v.begin(), v.end());
		for (int i = 0; i < N; i++)
			fill(visit[i].begin(), visit[i].begin() + M, false);
		year++;
	}
}