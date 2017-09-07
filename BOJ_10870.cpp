#include<bits/stdc++.h>

using namespace std;

vector<lld> v(100);
int main(void) {
	int n;
	scanf("%d", &n);
	v[1] = 0; v[2] = 1;
	for (int i = 3; i <= n + 1; i++) v[i] = v[i - 1] + v[i - 2];
	printf("%lld\n", v[n + 1]);
//	system("pause");
	return 0;
}