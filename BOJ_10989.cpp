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

vector<int> v(10001);
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int l;
		scanf("%d", &l);
		v[l]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < v[i]; j++)
			printf("%d\n", i);
	}
//	system("pause");
	return 0;
}