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

int pos[3] = { 1 };
int N, M;

void bfs() {
	vector<bool> visit(100001, false);
	queue<int> q;
	visit[N] = true;
	int cnt = 0;
	q.push(N);
	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int n = q.front();
			q.pop();
			if (n == M) {
				cout << cnt << endl;
				return;
			}
			for (int i = 0; i < 3; i++) {
				int tmp = n + pos[i];
				if (tmp >= 0 && tmp <= 100000 && !visit[tmp]) {
					q.push(tmp);
					visit[tmp] = true;
				}
			}
			for (int i = 0; i < 3; i++) {
				int tmp = n - pos[i];
				if (tmp >= 0 && tmp <= 100000 && !visit[tmp]) {
					q.push(tmp);
					visit[tmp] = true;
				}
			}
			int tmp = n * pos[1];
			if (tmp >= 0 && tmp <= 100000 && !visit[tmp]) {
				q.push(tmp);
				visit[tmp] = true;
			}
			tmp = n * pos[2];
			if (tmp >= 0 && tmp <= 100000 && !visit[tmp]) {
				q.push(tmp);
				visit[tmp] = true;
			}
		}
		cnt++;
	}
}

int main(void) {
	int a, b;
	cin >> a >> b >> N >> M;
	pos[1] = a; pos[2] = b;
	bfs();
//	system("pause");
	return 0;
}