#include<bits/stdc++.h>
using namespace std;


void  dij(int dis[],vector<pair<int,int>>v[],int  s,int n)
{

	int vis[n]={0};

	dis[s]=0;
	for(int i=0;i<n;i++)
	{
		int x=-1;
		for(int j=0;j<n;j++)
		{
			if(vis[j]==0&&(x==-1||dis[j]<dis[x]))
				x=j;
		}
		if(dis[x]==100000007)
			break;
		vis[x]=1;
		for(auto j : v[x])
		{
			int to=j.first;
			int len=j.second;
			
			if(dis[x]+len<dis[to])
				dis[to]=dis[x]+len;
			
		}



	}
}
int main()
{
	
	cout<<"enter no ofvertex and   edges"<<endl;
	int n,e;
	cin>>n>>e;
	int dis[n+1];
	vector<pair<int,int>>v[n];
	fill_n(dis,n,100007);
	for(int i=0;i<e;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back(make_pair(y,z));
		v[y].push_back(make_pair(x,z));

	}
	dij(dis,v,0,n);
	for(int i=0;i<n;i++)
		cout<<"dis of "<<i<<"is"<<dis[i]<<endl;

}
