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

int N, K;
void bfs(int start) {
	queue<int> q;
	vector<int> v(200001, 0);
	q.push(start);
	while (q.front() != K) {
		int x = q.front();
		q.pop();
		if (x - 1 >= 0 && v[x - 1] == 0) {
			v[x - 1] = v[x] + 1;
			q.push(x - 1);
		}
		if (x + 1 <= 100000 && v[x + 1] == 0) {
			v[x + 1] = v[x] + 1;
			q.push(x + 1);
		}
		if (x * 2 <= 100000 && v[x * 2] == 0) {
			v[x * 2] = v[x] + 1;
			q.push(x * 2);
		}
	}
	printf("%d", v[K]);
}

int main(void) {
	scanf("%d%d", &N, &K);
	bfs(N);
	system("pause");
	return 0;
}