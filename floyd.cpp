#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
void  floyd(int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{
				if(a[j][i]<1000000009 && a[i][k]<1000000009)
				if(a[j][k]>a[j][i]+a[i][k])
						a[j][k]=a[j][i]+a[i][k];
			}



}
int main()
{
	
	cout<<"enter no ofvertex and   edges"<<endl;
	int n,e;
	cin>>n>>e;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{	if(i==j)
			{
				a[i][j]=0;
				continue;
			}
			a[i][j]=1000000009;
}
	for(int i=0;i<e;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		a[x][y]=z;
	}
	floyd(n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cout<<"dis of "<<i<<"to"<<j<<"is"<<a[i][j]<<endl;

}
