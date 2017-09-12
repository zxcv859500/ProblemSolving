#include<bits/stdc++.h>

using namespace std;

int main(void){
	int n;
	long long sum = 0;
	for(int i=0;i<5;i++){
		int l;
		scanf("%d",&l);
		sum += (long long)pow(l,2) % 10;
		sum %= 10;
	}
	printf("%d\n",sum);
	return 0;
}