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

#define INTMAX 959595
#define gets(x) cin.getline(x,sizeof(x))
#define square(x) (x)*(x)

using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
		scanf("%lld", &v[i]);
	sort(v.begin(), v.end(),greater<long long>());
	for (int i = 0; i < n; i++)
		v[i] += (long long)i + 1;
	long long Max = 0;
	for (int i = 0; i < n; i++)
		Max = max<long long>(v[i], Max);
	printf("%lld\n", Max + 1);
	system("pause");
	return 0;
}