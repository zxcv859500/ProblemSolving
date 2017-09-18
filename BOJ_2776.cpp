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

int main(void) {
	int a, b, T;
	cin >> T;
	while (T--) {
		cin >> a;
		vector<int> v1(a);
		for (int i = 0; i < a; i++)
			scanf("%d", &v1[i]);
		cin >> b;
		vector<int> v2(b);
		for (int i = 0; i < b; i++)
			scanf("%d", &v2[i]);
		sort(v1.begin(), v1.end());
		for (int i : v2) {
			printf("%d\n", binary_search(v1.begin(), v1.end(), i));
		}
	}
//	system("pause");
	return 0;
}