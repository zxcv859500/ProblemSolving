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
	char num[1001];
	int sum;
	while (1) {
		gets(num);
		sum = 0;
		if (!strcmp(num, "0")) break;
		int len = strlen(num);
		for (int i = 0; i < len; i++) {
			sum += num[i] - '0';
			if (sum >= 10)
				sum = (sum % 10) + 1;
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}