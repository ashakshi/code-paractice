#include<iostream>
using namespace std;
int main(){
	int n,t;cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int j=-1,sum=0,ans=0;
	for(int i=0;i<n;i++){
		if(sum+a[i]<=t){
			sum+=a[i];
		}
		else{
			sum+=a[i];
			while(sum>t){
				j++;
				sum-=a[j];
			}
		}
		ans=max(ans,i-j);
	}
	cout<<ans;
	
}
