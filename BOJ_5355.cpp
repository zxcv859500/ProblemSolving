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

float solve(float num, char *str) {
	for (int i = 1; i < strlen(str); i += 2) {
		switch (str[i]) {
		case '@':
			num *= 3;
			break;
		case '%':
			num += 5;
			break;
		case '#':
			num -= 7;
			break;
		}
	}
	return num;
}
int main(void) {
	int T;
	float num;
	char str[100];
	scanf("%d", &T);
	while (T--) {
		scanf("%f", &num);
		gets(str);
		printf("%.2f\n",solve(num, str));
	}
	system("pause");
	return 0;
}
