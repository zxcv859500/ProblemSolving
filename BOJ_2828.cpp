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
	int N, M, J, pos_L, pos_R, cnt = 0;
	scanf("%d%d%d", &N, &M, &J);
	pos_L = 1; pos_R = M;
	vector<int> v(J);
	for (int i = 0; i < J; i++)
		cin >> v[i];
	for (int &i : v) {
		while (i > pos_R || i < pos_L) {
			if (i > pos_R) {
				pos_L++; pos_R++;
				cnt++;
			}
			else {
				pos_L--; pos_R--;
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
	system("pause");
	return 0;
}