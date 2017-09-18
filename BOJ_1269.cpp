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

vector<int> av(200000), bv(200000);

int main(void) {
	int a, b, st, fi;
	scanf("%d%d", &a, &b);
	int resa = a, resb = b;
	for (int i = 0; i < a; i++)
		scanf("%d", &av[i]);
	for (int i = 0; i < b; i++)
		scanf("%d", &bv[i]);
	sort(av.begin(), av.end());
	sort(bv.begin(), bv.end());
	for (int i = 0; i < a; i++) {
		st = 0, fi = b;
		while (st <= fi) {
			int tmp = (st + fi) / 2;
			if (av[i] == bv[tmp]) {
				resa--;
				break;
			}
			else if (av[i] > bv[tmp])
				st = tmp + 1;
			else
				fi = tmp - 1;
		}
	}
	for (int i = 0; i < b; i++) {
		st = 0, fi = a;
		while (st <= fi) {
			int tmp = (st + fi) / 2;
			if (bv[i] == av[tmp]) {
				resb--;
				break;
			}
			else if (bv[i] > av[tmp])
				st = tmp + 1;
			else
				fi = tmp - 1;
		}
	}
	printf("%d\n", resa + resb);
	//	system("pause");
	return 0;

}