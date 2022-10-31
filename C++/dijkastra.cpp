#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll v;

int main()
{
    ll v,e,i,j,w,k,u;
    cin >> v>>e;
    
    vector<vector<ll> > adj( v , vector<ll> (v, 0)); 
    
    
    for(i=0;i<e;i++)
    {
        cin>>u>>k>>w;
        adj[u][k]=w;
        adj[k][u]=w;
    }
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    ll wg[v],par[v];
    for(i=0;i<v;i++)
    {
        wg[i]=INT_MAX;
    }
    par[0]=0;
    wg[0]=0;
    cout<<endl;
    bool b[v];
    
    for(i=0;i<v;i++)
    b[i]=false;
    wg[0]=0;
    for(i=0;i<v-1;i++)
    {
        ll m=INT_MAX,ind;
        for(j=0;j<v;j++)
        {
            if(b[j]==false && wg[j]<=m)
            {
                m=wg[j];
                ind=j;
            }
        }
        b[ind]=true;
        for(j=0;j<v;j++)
        {
            if(adj[ind][j] && (adj[ind][j]+wg[ind])<wg[j] && !b[j] && wg[ind]!=INT_MAX)
            {
                par[j]=ind;
                wg[j]=adj[ind][j]+wg[ind];
            }
        }
    }
    for(ll i=0;i<v;i++)
    {
        cout<<i<<" "<<par[i];
        cout<<endl;
    }
    cout<<endl;
    for(ll i=0;i<v;i++)
    {
        cout<<i<<" "<<wg[i];
        cout<<endl;
    }
    
    return 0;
    
}
