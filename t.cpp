#include<iostream>
using namespace std;
bool isPermutation(string s,int n){
	int i=0;
	int j = n-1;
	while(i<j){
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;
}

bool isAllOne(string s,int n){
	int i=0;
	while(i<n){
		if(s[i]!='1')
			return false;
		i++;
	}
	return true;
}
void reverse(string &s,int n){
	int i=0,j=n-1;
	while(i<j){
		swap(s[i++],s[j--]);
	}
}
int firstZero(string s,int n){
	int i=0;
	while(s[i]!='0'){
		i++;
	}
	return i;
}

int main(){
	int n;
	cin>>n;
	cin.get();
	string s;
	getline(cin, s);
	cout<<isAllOne(s,n);
}




	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int k;
	// 	while((n&(n-1))){
	// 		n = n&(n-1);
	// 	}
	// 	k = n-1;
	// 	cout<<k<<endl;
	// }
