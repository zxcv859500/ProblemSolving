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
	stack<int> s;
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int l;
		scanf("%d", &l);
		if (l == 0)
			s.pop();
		else
			s.push(l);
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	printf("%d\n", sum);
//	system("pause");
	return 0;
}