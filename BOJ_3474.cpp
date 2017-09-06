#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n, cnt;
		cnt = 0;
		scanf("%d", &n);
		for (int j = 1; pow(5, j) <= n; j++)
			cnt += n / pow(5, j);
		printf("%d\n", cnt);
	}
// 	system("pause");
	return 0;
}