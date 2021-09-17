#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int ans=0,diff=0, maxi = a[n-1];
		for(int i=n-2;i>=0;i--){
				diff = maxi-a[i];
				ans = max(diff,ans);
				maxi = max(maxi, a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}