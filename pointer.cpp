#include<iostream>
using namespace std;
int main(){
	// char c='A';
	// char *chptr = &c;
	// cout<<(int*)chptr<<endl;
	// cout<<chptr<<endl;
	// cout<<(int *)chptr+1<<endl;
	// cout<<(int *)(chptr+1)<<endl;
	int a=10;
	int *y = &a;
	cout<<&y+1<<endl;

	return 0;
}