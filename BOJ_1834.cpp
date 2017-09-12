#include<bits/stdc++.h>

using namespace std;

int main(void){
	long long N;
	long long sum = 0;
	scanf("%lld",&N);
	for(long long i=1;i<N;i++)
		sum += N * i + i;
	printf("%lld\n",sum);
	return 0;
}