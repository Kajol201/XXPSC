#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int ma=max(a,b);
    ma=(2*ma)-1;
    int p=a+b;
    int k=max(ma,p);
    cout<<k<<endl;

    return 0;
}