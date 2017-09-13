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
	int N, M;
	scanf("%d%d", &N, &M);
	vector<int> v(N);
	for (int i = 0; i < N; i++)
		v[i] = i + 1;
	for (int i = 0; i < M; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		swap(v[a - 1], v[b - 1]);
	}
	for (int i : v)
		printf("%d ", i);
	system("pause");
	return 0;
}