#include <bits/stdc++.h>
//codeforces round 723(div2)
//i hate 1111
using namespace std;
typedef long long ll;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0),cout.tie(0);

	
int t;cin>>t;while(t--){
	int x;cin>>x;
	bool f=0;
	while(x>0){
		if(x%11==0||x%111==0){
			f=1;break;
		}
		x-=111;
	}
	if(f)cout<<"YES"<<endl;
	else
        cout<<"NO"<<endl;
}
//mc nugget theorem -->the greatest integer that can't be formed using 11 and 111
//is 11*111-11-111=1099
//so the loop will not give tle

  
}
