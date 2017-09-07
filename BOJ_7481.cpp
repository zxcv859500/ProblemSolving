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

void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, S, tmp;
		bool flag;
		flag = false;
		scanf("%d%d%d", &a, &b, &S);
		int num_a, num_b;
		if (a < b) {
			swap(a, b);
			flag = true;
		}
		tmp = S;
		num_a = S / a;
		S = S%a;
		num_b = S / b;
		while (1) {
			int sum;
			sum = ((num_a * a) + (num_b*b));
			if (sum == tmp) {
				if (flag)
					printf("%d %d\n", num_b, num_a);
				else
					printf("%d %d\n", num_a, num_b);
				break;
			}
			if (num_a < 0) {
				printf("Impossible\n");
				break;
			}
			if (sum > tmp)
				num_a--;
			else
				num_b++;
		}
	}
//	system("pause");
	return 0;
}
