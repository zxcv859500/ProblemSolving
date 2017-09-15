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

int k, n;
lld Max = -INTMAX;
vector<int> v(10000);

lld bs(lld st, lld fi) {
	if (st > fi)
		return Max;
	lld cnt = 0;
	lld tmp = (st + fi) / 2;
	for (int i : v)
		cnt += i / tmp;
	if (cnt >= n) {
		if (Max < tmp)
			Max = tmp;
	}
	if (cnt < n)
		return bs(st, tmp - 1);
	else if(cnt >= n)
		return bs(tmp + 1, fi);
}
int main(void) {
	scanf("%d%d", &k, &n);
	int M = 0;
	for (int i = 0; i < k; i++)
		scanf("%d", &v[i]), M = max(M, v[i]);
	printf("%lld\n", bs(0, M));
	return 0;
}