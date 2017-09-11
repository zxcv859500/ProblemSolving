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
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	if (v[0] + v[2] == v[1] * 2) {
		int a = v[1] - v[0];
		printf("%d", v[v.size() - 1] + a);
	}
	else {
		int r = v[1] / v[0];
		printf("%d\n", v[v.size() - 1] * r);
	}
//	system("pause");
	return 0;
}