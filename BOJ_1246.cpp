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
	int N, M, max = -INTMAX, tmp;
	scanf("%d%d", &N, &M);
	vector<int> v(M);
	for (int i = 0; i < M; i++)
		scanf("%d", &v[i]);
	sort(v.begin(), v.end());
	for (int i = (N > M ? 0 : M - N); i < M; i++) {
		int num;
		num = v[i] * (M - i);
		if (num > max) {
			max = num;
			tmp = v[i];
		}
	}
	printf("%d %d\n", tmp, max);
//	system("pause");
	return 0;
}