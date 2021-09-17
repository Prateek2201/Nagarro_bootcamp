#include<iostream>
#include<climits>
using namespace std;
int main(){
	char a[100],b[100];
	int len,maxi=INT_MIN,i,t=5;
	while(t--){
		cin.getline(a, 100);
		for(len=0;a[len]!='\0';len++){}
		if(len>maxi){
			maxi = len;
			for(i=0;i<len;i++){
				b[i] = a[i];
			}
		}
	}
	b[maxi]='\0';
	cout<<b<<endl;
	return 0;
}