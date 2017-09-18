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

vector<vector<int>> dice(10001,vector<int>(7));
int link[] = { 0,6,4,5,2,3,1 };
int n;
int solve(int cur, int prev) {//prev는 전 주사위의 윗면 숫자
	if (cur > n) return 0;
	int Max = -INTMAX;
	for (int i = 0; i < 6; i++)
		if (dice[cur][i + 1] == prev) {
			for (int j = 0; j < 6; j++) {
				if ((i + 1) != (j + 1) && (j + 1) != (link[i + 1]))
					Max = max(Max, dice[cur][j + 1]);
			}
			return solve(cur + 1, dice[cur][link[i + 1]]) + Max;
		}
}
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 6; j++)
			scanf("%d", &dice[i + 1][j + 1]);
	int Max = -INTMAX;
	for (int i = 0; i < 6; i++) {
		int tmpMax = 0;
		int tmp = solve(2, dice[1][i + 1]);
		for (int j = 0; j < 6; j++)
			if ((i + 1) != (j + 1) && (i + 1) != link[j + 1])
				tmpMax = max(tmpMax,dice[1][j + 1]);
		Max = max(Max, tmp + tmpMax);
	}

	printf("%d\n", Max);
	system("pause");
	return 0;
}