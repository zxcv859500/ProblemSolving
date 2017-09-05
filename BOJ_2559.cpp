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
	int n, k, max = -INTMAX, res = 0;
	scanf("%d%d", &n, &k);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for (int i = 0; i < n; i++) {
		res += v[i];
		if (i - k >= -1) {
			if (i - k >= 0) {
				res -= v[i - k];
			}
			if (max < res) max = res;
		}
	}
	printf("%d\n", max);
//	system("pause");
	return 0;
}