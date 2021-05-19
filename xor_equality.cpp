#include<iostream>
using namespace std;
#define ll long long

ll fastpower(ll x, ll y,ll p){
	int result=1;
	x=x%p;
	if(x==0){
		return 0;
	}
	while(y>0){
		if(y&1)
			result=(result*x)%p;
		y = y>>1;
		x = (x*x)%p;
	}
	return result;
}
int main(){
 
/* #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif */

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
	cin>>t;
	while(t--){
		int n, i , total=0;
		cin>>n;
		total=fastpower(2, n-1, 1000000007);
		cout<<total<<endl;
	}
return 0;
}