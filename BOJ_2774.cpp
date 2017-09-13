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
	char str[100];
	bool num[10];
	memset(num, false, sizeof(num));
	int T;
	scanf("%d", &T);
	while (T--) {
		int cnt;
		cnt = 0;
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++)
			num[str[i] - '0'] = true;
		for (int i = 0; i < 10; i++)
			if (num[i])
				cnt++;
		printf("%d\n", cnt);
		memset(num, false, sizeof(num));
	}
	system("pause");
	return 0;
}