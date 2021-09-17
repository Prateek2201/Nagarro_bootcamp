#include<iostream>
using namespace std;

int main(){
	string s="WeareLearningStrings";
	int cnt=0,i=0;
	while(cnt<3){
		if(s[i]=='e'){
			cnt++;
		}
		i++;
	}
	for(int j=i;j<s.length();j++){
		cout<<s[j];
	}
	cout<<endl;
	return 0;
}