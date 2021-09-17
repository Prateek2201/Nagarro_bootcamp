#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin>>n;
	int *a = new int[n];
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int freq[32]={0};
	for(int i=0;i<32;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(a[j]>0 and a[j]&1){
				cnt++;
			}
			a[j] = a[j]>>1;
		}
		freq[i] = cnt;
	}
	for(int i=0;i<32;i++){
		if(freq[i]%3==1){
			ans += pow(2,i);
		}
	}
	cout<<ans<<endl;
	return 0;
}