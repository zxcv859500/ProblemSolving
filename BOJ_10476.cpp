#include<bits/stdc++.h>

#define INF 9876543 

using namespace std;

int arr[202][2],DP[202][3][202],N,k;

int solve(int cur,int stat,int cnt);
int main(void){
	scanf("%d%d",&N,&k);
	
	for(int i=1;i<=N+1;i++)
		scanf("%d%d",&arr[i][0],&arr[i][1]);
	printf("%d",max({solve(1,0,0),solve(1,1,1),solve(1,2,1)}));
	return 0;
}

int solve(int cur,int stat,int cnt){
	int &r = DP[cur][stat][cnt];
	
	if(cur>N && cnt == k && stat == 0 /*|| cur>N && cnt == k + 1*/) return 0; 
	else if(cur>N) return -INF;
	if(cnt>k) return -INF;
	if(r != 0) return r;
	if(stat == 0) 
		return r = max({
					solve(cur+1,0,cnt) + arr[cur][0] + arr[cur][1],
					solve(cur+1,1,cnt+1) + arr[cur][0] + arr[cur][1],
					solve(cur+1,2,cnt+1) + arr[cur][0] + arr[cur][1]
					});
	else if(stat == 1)
		return r = max(
					solve(cur+1,0,cnt) + arr[cur][1],
					solve(cur+1,1,cnt+1) + arr[cur][1]
					);
	else
		return r = max(
					solve(cur+1,0,cnt) + arr[cur][0],
					solve(cur+1,2,cnt+1) + arr[cur][0]
					);
}