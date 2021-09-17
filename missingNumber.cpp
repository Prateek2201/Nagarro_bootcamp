#include<iostream>
using namespace std;
int main(){
	int exp1=0, exp2=0,n,num;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>num;
		exp1 ^= num;
	}
	for(int i=1;i<=n;i++){
		exp2 ^= i;
	}
	cout<<(exp1^exp2)<<endl;
	return 0;
}