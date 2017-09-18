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
	vector<string> v;
	int T;
	scanf("%d", &T);
	
	cin.ignore();

	while (T--) {
		char str[500];
		gets(str);
		char * ptr = strtok(str, " ");
		while (ptr != NULL) {
			v.push_back(ptr + '\0');
			ptr = strtok(NULL, " ");
		}
		for (int i = 2; i < v.size(); i++)
			cout << v[i] << " ";
		for (int i = 0; i < 2; i++)
			cout << v[i] << " ";
		printf("\n");
		v.clear();
	}
//	system("pause");
	return 0;
}