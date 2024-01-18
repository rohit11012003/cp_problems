#include <bits/stdc++.h>
using namespace std;
 
const int N = 3e5+5;
 
// variables used to store data globally
int count1[N];
 
// adjacency list representation of tree
vector<int> adj[N];
 
// function to calculate no. of nodes in a subtree
void numberOfNodes(int s, int e)
{
    vector<int>::iterator u;
    count1[s] = 1;
    for (u = adj[s].begin(); u != adj[s].end(); u++) {
         
        // condition to omit reverse path
        // path from children to parent
        if (*u == e)
            continue;
         
        // recursive call for DFS
        numberOfNodes(*u, s);
         
        // update count[] value of parent using
        // its children
        count1[s] += count1[*u];
    }
}
 
// function to add edges in graph
void addEdge(int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}
 
// function to print result
void printNumberOfNodes()
{
    for (int i = 1; i < N; i++) {
        cout << "\nNodes in subtree of " << i;
        cout << ": " << count1[i];
    }
}
 
 int fun(int ind,vector<int> &dp,int par)
 {
    if(ind==1)
    {
    if(adj[ind].size()==1)
    {
        return dp[ind]= 2;
    }
    if(adj[ind].size()==0)
    {
        return dp[ind]= 1;
    }
    int left=adj[ind][0];
    int right=adj[ind][1];
    if(adj[left].size()-1==0||adj[right].size()-1==0)
    {
        return dp[ind]= 3;
    }
    if(adj[left].size()-1==1||adj[right].size()-1==1)
    {
         return dp[ind]= 4;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    else{
        return dp[ind]= min(2+fun(left,dp,ind),2+fun(right,dp, ind));
    }
    }
    else{
        
    if(adj[ind].size()-1==1)
    {
        return dp[ind]= 2;
    }
    if(adj[ind].size()-1==0)
    {
        return dp[ind]= 1;
    }
    int a=adj[ind][0];
    int b=adj[ind][1];
    int c=adj[ind][2];
    int left;
    int right;
    if(par==a)
    {
        left=b;
        right=c;
    }
    else if(par==b)
    {
        left=a;
        right=c;
    }
    else{
        left=a;
        right=b;
    }
    if(adj[left].size()-1==0||adj[right].size()-1==0)
    {
        return dp[ind]= 3;
    }
    if(adj[left].size()-1==1||adj[right].size()-1==1)
    {
         return dp[ind]= 4;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    else{
        return dp[ind]= min(2+fun(left,dp,ind),2+fun(right,dp,ind));
    }
    }
 }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            addEdge(a,b);
        }
    //numberOfNodes(1, 0);
    vector<int> dp(n+5,-1);
   int p= fun(1,dp,1);
   //cout<<p<<endl;
   cout<<n-p<<endl;
    for(int i=0;i<n+5;i++)
    {
        adj[i].clear();
    }
    }
}