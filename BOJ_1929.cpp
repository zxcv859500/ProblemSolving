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
#define square(x) x*x
using namespace std;

using lld = long long;
using pii = pair<int, int>;

int main(void) {
	vector<int> chae(1000001, 1);
	chae[1] = 0;
	for (int i = 2; i <= 1000000; i++) {
		for (int j = i * 2; j <= 1000000; j += i)
			chae[j] = 0;
	}
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = n; i <= m; i++) {
		if (chae[i] == 1)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}
