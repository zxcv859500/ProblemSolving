#include<bits/stdc++.h>

using namespace std;

int main(void){
	char str[101];
	int N, sum = 0;
	scanf("%d",&N);
	scanf("%s",str);
	for(int i=0;i<N;i++)
		sum += str[i] - '0';
	printf("%d\n",sum);
	return 0;
}