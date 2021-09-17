#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string s="abcde";
	string s_copy=s;
	for(int i=1;i<=s.length();i++){
		string x=s.substr(i,s.length());
		if(x==s_copy){
			cout<<"Rotate it "<<i<<" times"<<endl;
			break;
		}
	}
	return 0;
}