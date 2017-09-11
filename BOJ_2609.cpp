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

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	int g = gcd(a, b);
	printf("%d\n%d", g, ((a / g) * (b / g))*g);
//	system("pause");
	return 0;
}