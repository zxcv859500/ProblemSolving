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

using goal = 
struct GoalType {
	int time;
	int winning;
};

void printres(int time) {
	int m = time / 60;
	int s = time % 60;
	m >= 10 ? printf("%d", m) : printf("0%d", m);
	s >= 10 ? printf(":%d\n", s) : printf(":0%d\n", s);
	return;
}
int main(void) {
	int N, score1 = 0, score2 = 0;
	int res1 = 0, res2 = 0;
	scanf("%d", &N);
	vector<goal> v(N + 1);
	for (int i = 0; i < N; i++) {
		int win, m, s;
		scanf("%d%d:%d", &win, &m, &s);
		if (win == 1)
			score1++;
		else if (win == 2)
			score2++;
		v[i].time = m * 60 + s;
		if (score1 > score2)
			v[i].winning = 1;
		else if (score1 < score2)
			v[i].winning = 2;
		else
			v[i].winning = 3;
	}
	v[N].time = 48 * 60;

	for (int i = 0; i < N; i++) {
		if (v[i].winning == 1)
			res1 += v[i + 1].time - v[i].time;
		else if(v[i].winning == 2)
			res2 += v[i + 1].time - v[i].time;
	}

	printres(res1);
	printres(res2);
//	system("pause");
	return 0;
}