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

int N;
vector<int> L(21), J(21);

int solve(int hp, int cur) {
	if (hp <= 0)
		return -INTMAX;
	if (cur > N)
		return 0;
	return max(solve(hp - L[cur], cur + 1) + J[cur], solve(hp,cur+1));
}
int main(void) {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &L[i]);
	for (int i = 1; i <= N; i++)
		scanf("%d", &J[i]);
	printf("%d\n", solve(100, 1));
	system("pause");
	return 0;
}