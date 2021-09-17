#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		if(v[i]!=0){
			v[cnt++] = v[i];
		}
	}
	for(int i=cnt;i<n;i++){
		v[i] = 0;
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
    return 0;
}