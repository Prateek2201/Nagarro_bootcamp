#include<iostream>
using namespace std;
int main(){
	int num,cnt=0;
	cout<<"Enter number: ";
	cin>>num;
	while(num!=0){
		if(num&1==1){
			cnt++;
		}
		num = num>>1;
	}
	cout<<cnt<<endl;
	return 0;
}