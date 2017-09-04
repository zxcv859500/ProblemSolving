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
	int N, arr[30000], max = -INTMAX, cur = 0, maxcur = -INTMAX;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
			cur = 0;
		}
		cur++;
		if (cur > maxcur) maxcur = cur;
	}
	printf("%d\n", maxcur - 1);
	system("pause");
	return 0;
}