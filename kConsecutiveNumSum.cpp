#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int k;
	cin>>k;
	int sum=0,maxi=INT_MIN;
	for(int i=0;i<k;i++){
		sum += v[i];
	}
	maxi = max(maxi,sum);
	for(int i=k;i<n;i++){
		sum -= v[i-k];
		sum += v[i];
		maxi = max(maxi,sum);
		cout<<sum<<" ";
	}
	cout<<endl;
	cout<<maxi<<endl;
    return 0;
}