#include<bits/stdc++.h>

using namespace std;

int N, M;
vector<int> v(101);

int solve(int cur, int cnt,int sum) {
	if (cur > N) return -INTMAX;
	if (sum > M) return -INTMAX;
	if (cnt >= 3) return 0;

	return max(solve(cur + 1, cnt + 1,sum + v[cur]) + v[cur], 
				solve(cur + 1, cnt, sum));
}
int main(void) {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", &v[i]);
	printf("%d", solve(1, 0, 0));
//	system("pause");
	return 0;
}