#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	bool freq[26] = {false};
	string res="";
	for(int i=0;i<s.length();i++){
		
		if(freq[s[i]-'a']==false){
			// s = s.substr(0,i-remCnt) + s.substr(i+1,s.length()-(i-remCnt+1));
			freq[s[i]-'a'] = true;			
			res = res + s[i];
		}
	}
	cout<<res<<endl;
    return 0;
}