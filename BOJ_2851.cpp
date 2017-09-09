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
	int sum = 0, previous = 0;
	for (int i = 0; i < 10; i++) {
		if (sum >= 100) {
			if (sum - 100 > abs(previous - 100))
				cout << previous << endl;
			else
				cout << sum << endl;
//			system("pause");
			return 0;
		}
		int l;
		cin >> l;
		previous = sum;
		sum += l;
	}
	if (sum - 100 > abs(previous - 100))
		cout << previous << endl;
	else
		cout << sum << endl;
//	system("pause");
	return 0;
}