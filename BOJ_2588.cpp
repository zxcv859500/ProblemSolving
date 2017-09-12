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
	int n, m;
	scanf("%d%d", &n, &m);
	int tmp1, tmp2, tmp3;
	tmp1 = m % 10;
	tmp2 = (m % 100 - tmp1) / 10;
	tmp3 = m / 100;
	printf("%d\n%d\n%d\n%d\n", n*tmp1, n*tmp2, n*tmp3, n*m);
	system("pause");
	return 0;
}