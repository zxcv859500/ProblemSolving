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

long long combi(int n, int r) {
	static long long memo[101][101];
	if (memo[n][r] != 0)
		return memo[n][r];
	if (n == r || r == 0)
		return 1;
	return memo[n][r] = combi(n - 1, r) + combi(n - 1, r - 1);
}

int main(void) {
	int n, r;
	scanf("%d%d", &n, &r);
	printf("%lld", combi(n, r));
//	system("pause");
	return 0;
}