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
	for (int i = 0; i < 3; i++) {
		int t1, t2, h1, m1, s1, h2, m2, s2;
		scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
		t1 = (h1 * 3600) + (m1 * 60) + s1;
		t2 = (h2 * 3600) + (m2 * 60) + s2;
		t2 -= t1;
		h1 = t2 / 3600;
		t2 %= 3600;
		m1 = t2 / 60;
		t2 %= 60;
		s1 = t2;
		printf("%d %d %d\n", h1, m1, s1);
	}
//	system("pause");
	return 0;
}
