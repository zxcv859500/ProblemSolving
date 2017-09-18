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

using lld = long long int;

int main(void) {
	int a, b, st, fi, cnt = 0;
	scanf("%d%d", &a, &b);
	vector<int> va(a), vb(b);
	for (auto &i : va)
		scanf("%d", &i);
	for (auto &i : vb)
		scanf("%d", &i);
	int size = va.size();
	sort(va.begin(), va.end());
	sort(vb.begin(), vb.end());
	for (int &i : va) {
		st = 0, fi = b - 1;
		while (!(st > fi)) {
			int tmp = (st + fi) / 2;
			if (i == vb[tmp]) {
				i = -1;
				cnt++;
				break;
			}
			if (i < vb[tmp])
				fi = tmp - 1;
			else
				st = tmp + 1;
		}
	}
	printf("%d\n", size - cnt);
	for (int i : va) {
		if (i != -1)
			printf("%d ", i);
	}
//	system("pause");
	return 0;
}