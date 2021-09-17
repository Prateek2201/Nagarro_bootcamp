#include <iostream>
#include <cmath>
using namespace std;

bool checkPowersOfThree(int n,int x) {
    if(n==0){
        return true;
    }
    if(n-pow(3,x)<0){
        return false;
    }
    n = n-pow(3,x);
    cout<<n<<"\t";
    if(checkPowersOfThree(n,x+1)){
        return true;
    }
    n = n+pow(3,x);
    cout<<n<<endl;
    if(checkPowersOfThree(n,x+1)){
        return true;
    }
    return false;
}

int main() {
	int n;
	cin>>n;
	cout<<checkPowersOfThree(n,0)<<endl;
	return 0;
}