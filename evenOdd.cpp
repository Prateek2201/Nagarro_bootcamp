#include<iostream>
using namespace std;

void printodd(int i){
	if(i<=0){
		return;
	}
	cout<<i<<endl;
	printodd(i-2);
}

void printeven(int i,int n){
	if(i>n){
		return;
	}
	cout<<i<<endl;
	printeven(i+2,n);
}

int main() {
	int n;
	cin>>n;
	if(n%2==0){
		printodd(n-1);
	}
	else{
		printodd(n);
	}
	printeven(2,n);
	return 0;
}