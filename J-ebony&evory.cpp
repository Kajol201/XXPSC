#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    if(c<a && c<b) cout<<"NO"<<endl;
    else if(c%a==0 || c%b==0) cout<<"YES"<<endl;
    else
    {
        int sum=0,flag=0;
        int i=1;
        while(sum<=c)
        {
            sum=a*i;
            int sam=c-sum;
            if(sam%b==0)
            {
                flag=1;
                break;
            }
            else if(sam<b) break;
            i++;
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}