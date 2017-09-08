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
	int N;
	scanf("%d", &N);
	priority_queue<int> pq;
	while (N--) {
		for (int i = 0; i < 10; i++) {
			int l;
			scanf("%d", &l);
			pq.push(l);
		}
		for (int i = 0; i < 2; i++)
			pq.pop();
		printf("%d\n", pq.top());
		while (!pq.empty())
			pq.pop();
	}
//	system("pause");
	return 0;
}