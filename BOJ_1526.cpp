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

#define DIV 1000000000

int main(void) {
	int N;
	scanf("%d", &N);
	N++;
	while (N--) {
		string str;
		str = to_string(N);
		bool flag = true;
		for (char ch : str) {
			if (ch == '4' || ch == '7');
			else {
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("%d\n", N);
			break;
		}
		flag = true;
	}
//	system("pause");
	return 0;
}