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
	string max_name[50], str;
	float max = -INTMAX;
	int n, cnt;
	float k;
	while (1) {
		cin >> n;
		if (n == 0) break;
		cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> str >> k;
			if (k > max) {
				for (int i = 0; i < 50; i++)
					max_name[i] = "";
				cnt = 0;
				max = k;
				max_name[cnt++] = str;
			}
			else if (k == max) {
				max_name[cnt++] = str;
			}
		}
		for (int i = 0; i < cnt; i++)
			cout << max_name[i] << " ";
		cout << endl;
		max = -INTMAX;
		cnt = 0;
	}
//	system("pause");
	return 0;
}