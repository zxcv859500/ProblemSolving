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

using LI = 
struct LocationInformType {
	int x, y, r;
};

int main(void) {
	LI c1, c2;
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d%d%d%d", &c1.x, &c1.y, &c1.r, &c2.x, &c2.y, &c2.r);
		int tmp = square(c1.x - c2.x) + square(c1.y - c2.y);
		double d = sqrt(tmp);
		if (d == 0 && c1.r == c2.r) printf("-1\n");
		else if ((c1.r > c2.r ? c1.r - c2.r : c2.r - c1.r) > d) printf("0\n");
		else if (d == 0) printf("0\n");
		else if (c1.r + c2.r < d) printf("0\n");
		else if ((c1.r > c2.r ? c1.r - c2.r : c2.r - c1.r) < d && c1.r + c2.r > d) printf("2\n");
		else if (c1.r + c2.r == d || (c1.r > c2.r ? c1.r - c2.r : c2.r - c1.r) == d) printf("1\n");
	}
	system("pause");
	return 0;
}