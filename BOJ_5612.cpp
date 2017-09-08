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
	int n, m, max;
	scanf("%d%d", &n, &m);
	max = m;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		a -= b;
		m += a;
		if (m < 0) {
			printf("0\n");
			return 0;
		}
		if (m > max) max = m;
	}
	printf("%d\n", max);
//	system("pause");
	return 0;
}