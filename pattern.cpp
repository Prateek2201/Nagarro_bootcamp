#include<iostream>
using namespace std;
int main(){
	int n=5,m=9,i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<' ';
		}
		for(j=1;j<=2*i-1;j++){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}