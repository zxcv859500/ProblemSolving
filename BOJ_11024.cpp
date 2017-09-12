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

vector<int> v(100000);
int n, Max = -INTMAX;

int main(void) {
	int T, sum;
	string s;
	scanf("%d\n", &T);
	while (T--) {
		sum = 0;
		char str[10000];
		gets(str);
		int len = strlen(str);
		str[len] = ' ';
		str[len + 1] = '\0';
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] != ' ')
				s += str[i];
			else {
				sum += atoi(s.c_str());
				s = "";
			}
		}
		printf("%d\n", sum);
	}
	system("pause");
	return 0;
}