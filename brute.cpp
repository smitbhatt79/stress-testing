// Have mercy upon us, O arav, our savior

#include<bits/stdc++.h>

#define see(...) 42


#define int long long
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;    
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int i=0,j=0;
    int sum = v[0];
    int count = 0;
    while(j<n)
    {
        if(sum>=x && sum<=y)
            {
                see(i,j,sum);
                count++;
                int temp = j;
                i = temp+1;
                j = temp+1;
                if(temp+1<n)
                    sum = v[temp+1];
            }
        else if(sum<x)
        {
            j++;
            if(j<n)
                sum += v[j];
        }
        else
        {
            sum -= v[i];
            i++;
        }
    }
    cout<<count<<endl;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        solve();
    

return 0;
}

