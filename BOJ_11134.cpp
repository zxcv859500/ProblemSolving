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
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, C, res;
		scanf("%d%d", &N, &C);
		res = ceil((double)N / C);
		printf("%d\n", res);
	}
//	system("pause");
	return 0;
}