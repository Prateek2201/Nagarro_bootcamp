#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		for(int i=1;i<=n;i++){
			int num=i;
			bool isEqual=true;
			int dig = num%10;
			num = num/10;
			while(num>0){
				int tmp = num%10;
				if(tmp!=dig){
					isEqual=false;
					break;
				}
				num = num/10;
			}
			if(isEqual){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}