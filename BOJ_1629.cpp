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

long long a, b, c;

long long solve(long long a, long long b, long long c) {
	if (b == 0)
		return 1;
	if (b % 2 == 1)
		return (a*solve(a%c, b - 1, c)) % c;
	else
		return square(solve(a%c, b / 2, c) % c) % c;
}
int main(void) {
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n", solve(a%c, b, c));
	system("pause");
	return 0;
}