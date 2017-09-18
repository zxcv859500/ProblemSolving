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

#define INTMAX 959595
#define gets(x) cin.getline(x,sizeof(x))
#define square(x) (x)*(x)

using namespace std;

int main(void) {
	vector <long long > v(3);
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++) {
		for (int j = 0; j < 3; j++)
			scanf("%lld", &v[j]);
		printf("Scenario #%d:\n",i + 1);
		sort(v.begin(), v.end());
		if ((square(v[0]) + square(v[1])) == square(v[2]))
			printf("yes\n");
		else
			printf("no\n");
		printf("\n");
	}
//	system("pause");
	return 0;
}