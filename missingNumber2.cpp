#include<iostream>
using namespace std;
int main(){
	int num, exp1=0, exp2=0, n;
	cout<<"Enter no: ";
	cin>>n;
	for(int i=1;i<=n-2;i++){
		cin>>num;
		exp1 ^= num;
	}
	for(int i=1;i<=n;i++){
		exp2 ^= i;
	}
	exp1 = exp1^exp2;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(exp1-i==j){
				cout<<i<<"  "<<j<<endl;
				return 0;
			}
		}
	}
	return 0;
}