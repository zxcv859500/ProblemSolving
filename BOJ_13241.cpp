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

lld n, m, Max = -959595;
vector<lld> v(1000000, 0);
lld bs(lld st, lld fi) {
	lld sum = 0;
	if (st > fi)
		return Max;
	lld tmp = (st + fi) / 2;
	for (int i = 0; i < n; i++) {
		if (v[i] < tmp) continue;
		sum += v[i] - tmp;
	}

	if (sum >= m) 
		if(Max<tmp)
			Max = tmp;

	if (sum < m)
		bs(st, tmp - 1);
	else
		bs(tmp + 1, fi);
}
int main(void) {
	lld tmp;
	scanf("%lld%lld", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &v[i]); 
		tmp = max<lld>(tmp, v[i]);
	}
	printf("%lld\n",bs(0, tmp));
//	system("pause");
	return 0;
}