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

int main(void) {
	bool stu[31];
	memset(stu, false, sizeof(stu));
	for (int i = 0; i < 28; i++) {
		int l;
		scanf("%d", &l);
		stu[l] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (stu[i] == false)
			printf("%d\n", i);
	}
//	system("pause");
	return 0;
}