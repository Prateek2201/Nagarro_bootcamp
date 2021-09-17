#include <iostream>

using namespace std;

int main()
{
    int i,j,n,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 or j==i)
                cout<<1<<"\t";
            else if(j==1 or j==i-1)
                cout<<i<<"\t";
            else
            {
             // if(j>i-j)
             //    j=i-j;

             ans=1;
             for(int k=0;k<j;k++)
             {
                 ans*=(i-k);
                 ans/=(k+1);
                 //cout<<ans<<" "<<j<<" ";
             } 
             cout<<ans<<"\t";  
            }
        }
        cout<<endl;
    }

    return 0;
}