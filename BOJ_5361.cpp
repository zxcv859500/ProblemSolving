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
#define square(x) x*x
using namespace std;

using lld = long long;
using pii = pair<int, int>;

const float arr[5] = { 350.34,230.90,190.55,125.30,180.90 };

int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		float sum = 0;
		for(int i=0;i<5;i++){
			int num;
			scanf("%d", &num);
			sum += arr[i] * num;
		}
		printf("$%.2f\n", sum);
		sum = 0;
	}
	system("pause");
	return 0;
}