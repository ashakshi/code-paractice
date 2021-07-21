#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
int dp[2005][2005];

int maximum(int n,int k,int i){
	if(k<=0)return 1;
	else if(dp[i][k]!=-1)return dp[i][k];
int ans=0;

for(int j=i;j<=n;j+=i){
	if(j%i==0)
	ans+=maximum(n,k-1,j)%M;
	ans%=M;
}
dp[i][k]=ans;
return dp[i][k];
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0),cout.tie(0);
memset(dp,-1,sizeof(dp));
int n,k;cin>>n>>k;

cout<<maximum(n,k,1);
	


  
}
