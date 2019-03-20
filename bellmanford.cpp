#include<bits/stdc++.h>
using namespace std;


void  bellman(int dis[],vector<pair<pair<int,int>,int>>v,int  s,int n)
{



	dis[s]=0;
	for(int i=0;i<n-1;i++)
	{
		for(auto i: v)
		{
			int x=i.first.first;
			int y=i.first.second;
			int z=i.second;
			if(dis[x]+z<dis[y])
			{
				dis[y]=dis[x]+z;

			}
		}
		
	


	}
}
int main()
{
	
	cout<<"enter no ofvertex and   edges"<<endl;
	int n,e;
	cin>>n>>e;
	int dis[n+1];
	vector<pair<pair<int,int>,int>>v;
	fill_n(dis,n,100007);
	for(int i=0;i<e;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v.push_back(make_pair(make_pair(x,y),z));
//		v[y].push_back(make_pair(x,z));

	}
	bellman(dis,v,0,n);
	for(int i=0;i<n;i++)
		cout<<"dis of "<<i<<"is"<<dis[i]<<endl;

}
