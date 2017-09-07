#include<bits/stdc++.h>

using namespace std;

int main(void) {
	string str;
	string res[10000];
	int num = 0, cnt = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++){
		if (str[i] != ',')
			res[cnt] += str[i];
		else {
			num += stoi(res[cnt]);
			cnt++;
		}
	}
	num += stoi(res[cnt]);
	printf("%d\n", num);
//	system("pause");
	return 0;
}