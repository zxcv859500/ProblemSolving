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

int N, M, V;
vector<vector<int>> v(1001);
vector<bool> visit(1001, false);
void dfs(int cur) {
	//if (visit[cur]) return;
	cout << cur << ' ';
	//visit[cur] = true;
	for (int i : v[cur])
	{
		if (!visit[i]) {
			visit[i] = 1;
			dfs(i);
		}
	//	visit[i] = 0;
	}
}

void bfs() {
	queue<int> q;
	vector<bool> bvisit(1001, false);
	bvisit[V] = true;
	q.push(V);
	while (!q.empty()) {
		int tmp = q.front();
		cout << tmp << ' ';
		q.pop();
		for (int j : v[tmp]) {
			if (!bvisit[j]) {
				q.push(j);
				bvisit[j] = true;
			}
		}
	}

}
int main(void) {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 1; i <= N; i++)
		sort(v[i].begin(), v[i].end());
	visit[V] = 1;
	dfs(V);
	cout << endl;
	bfs();
//	system("pause");
    return 0;
}