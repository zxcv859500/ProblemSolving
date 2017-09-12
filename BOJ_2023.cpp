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

int sosu[] = { 2,3,5,7 };

int N;

bool isPrime(int n)
{
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0) return 0;
	return 1;
}
void solve(int num, int cnt) {
	if (cnt >= N) {
		if (isPrime(num))
			printf("%d\n", num);
		return;
	}
	
	for (int i = 1; i <= 9; i += 2)
	{
		int temp = num * 10 + i;
		if (isPrime(temp))
		{
			solve(temp, cnt + 1);
		}
	}
}
int main(void) {
	scanf("%d", &N);
	for (int i = 2; i <= 9; i++)
		if(isPrime(i)) solve(i, 1);
//	system("pause");
	return 0;
}