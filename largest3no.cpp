#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,fn=INT_MIN,sn=INT_MIN,tn=INT_MIN;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		if(a[i]>fn){
			tn = sn;
			sn = fn;
			fn = a[i];
		}
		else if(a[i]>sn){
			tn = sn;
			sn = a[i];
		}
		else if(a[i]>tn){
			tn = a[i];
		}
	}
	cout<<fn<<' '<<sn<<' '<<tn<<endl;
}