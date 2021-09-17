#include<iostream>
using namespace std;
int main(){
	int a[] = {1,2,4,1,3,2}, exp=0;
	for(int i=0;i<6;i++){
		exp ^= a[i];
	}
	cout<<exp<<endl;
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			if(exp-a[i]==a[j]){
				cout<<a[i]<<"  "<<a[j]<<endl;
				return 0;
			}
		}
	}
	return 0;
}