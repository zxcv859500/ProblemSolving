#include<bits/stdc++.h>

using namespace std;

int main(void){
	int sum;
	while(1){
		int n;
		vector<int> v;
		sum = 0;
		scanf("%d",&n);
		if(n == -1) 
			break;
		for(int i=1;i<n;i++){
			if(n%i == 0){
				sum += i;
				v.push_back(i);
			}
		}
		if(sum == n){
			printf("%d = ", n);
			for(int i=0;i < v.size();i++){
				printf("%d",v[i]);
				if(i != v.size() - 1)
					printf(" + ");
				}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n",n);
		v.clear();
	}
	return 0;
}