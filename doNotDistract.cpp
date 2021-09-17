#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		vector<int> freq(26,0);
		bool isSuspicious = false;
		for(int i=0;i<n;i++){
			char c = s[i];
			freq[c-'A']++;
			while(s[i]==c){
				i++;
			}
			if(freq[s[i]-'A']){
				cout<<"NO"<<endl;
				isSuspicious=true;
				break;
			}
		}
		if(!isSuspicious){
			cout<<"YES"<<endl;
		}
	}
	return 0;
}