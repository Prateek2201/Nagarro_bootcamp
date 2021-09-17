#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,1,4,3,1,3,5};
	int left[1000],right[1000],i,n,ans=0;
	n = sizeof(a)/sizeof(int);
	left[0] = a[0];
	right[n-1] = a[n-1];
	for(i=1;i<n;i++){
		left[i] = max(a[i],left[i-1]);
	}
	for(i=0;i<n;i++){
		cout<<left[i]<<" ";
	}
	for(i=n-2;i>=0;i--){
		right[i] = max(a[i],right[i+1]);
	}
	cout<<endl;
	for(i=0;i<n;i++){
		ans += min(left[i],right[i])-a[i];
		cout<<right[i]<<" ";
	}
	cout<<endl<<ans;
	return 0;
}