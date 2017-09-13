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

int quad[64][64];
int n;

void solve(int x, int y, int size) {
	int cur = quad[y][x];
	bool flag = true;
	for (int i = y; i < y + size && flag; i++) 
		for (int j = x; j < x + size && flag; j++) 
			if ((quad[i][j]) != cur) 
				flag = false;
	if (flag) {
		printf("%d", cur);
		return;
	}
	else {
		printf("(");
		solve(x, y, size / 2);
		solve(x + (size / 2), y, size / 2);
		solve(x, y + (size / 2), size / 2);
		solve(x + (size / 2), y + (size / 2), size / 2);
		printf(")");
	}
}
int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &quad[i][j]);
	solve(0, 0, n);
	system("pause");
	return 0;
}