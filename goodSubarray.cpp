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
		int sum,cnt;
		for(int i=0;i<n;i++){
			for(int len=0;len<n;i++){
				sum=0,cnt=0;
				for(int j=i;j<=len;j++){
					sum += a[j];
				}
				if(sum%n==0){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}