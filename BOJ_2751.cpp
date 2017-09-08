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

int main(void) {
	priority_queue<int,vector<int>,greater<int>> pq;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int l;
		scanf("%d", &l);
		pq.push(l);
	}
	while (!pq.empty()) {
		printf("%d\n", pq.top());
		pq.pop();
	}
//	system("pause");
	return 0;
}