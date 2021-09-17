#include<iostream>
#include<climits>
using namespace std;
int main(){
	char a[100] = "Coding";
	int  i,j,len=6;
	int k=3;
	for(i=len-1;i>=0;i--){
		a[i+k] = a[i];
	}
	for(i=0,j=len;i<k;i++,j++){
		a[i] = a[j];
	}
	a[len] = '\0';
	cout<<a;

	cout<<endl;
	return 0;
}