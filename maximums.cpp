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

int n;cin>>n;
int b[n];
for(int i=0;i<n;i++)cin>>b[i];
//first  element remains the same since x for i=1 is given 0
cout<<b[0]<<" ";
int mx=max(b[0],0);//intialising mx-the maximum uptil now to be
for(int i=1;i<n;i++){
	b[i]+=mx;
	cout<<b[i]<<" ";
	mx=max(mx,b[i]);
}
}




