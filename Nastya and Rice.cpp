#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
#include<algorithm>
#define pb push_back
using namespace std;
//typedef long long ll;

int main(){

int t;cin>>t;
while(t--){
	int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	int mxl=a-b,mxh=a+b;
	int ll=c+d,hl=c-d;
	if(n*mxl>ll||mxh*n<hl)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
}




