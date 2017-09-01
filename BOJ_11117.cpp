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

int main(void) {
	string Case, word;
	int T;
	scanf("%d", &T);
	while (T--) {
		cin >> Case;
		int w;
		scanf("%d", &w);
		while (w--) {
			string tmp;
			bool flag;
			flag = true;
			cin >> word;
			tmp = Case;
			for (int i = 0; i < word.length(); i++) {
				if (tmp.find(word.at(i), 0) == -1) {
					//					cout << Case.find(word.at(i)) << endl;
					flag = false;
					break;
				}
				tmp[tmp.find(word.at(i))] = 0;
			}
			if (flag) printf("YES\n");
			else printf("NO\n");
		}
	}
	system("pause");
	return 0;
}