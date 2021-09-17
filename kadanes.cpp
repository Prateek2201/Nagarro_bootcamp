#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,csum=0,msum=INT_MIN;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		csum += a[i];
		if(csum<0){
			csum=a[i];
		}
		msum = max(csum,msum);
	}
	cout<<msum;
}