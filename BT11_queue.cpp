#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int matrix[][50]={{2, 1, 0, 2, 1},
					{1, 0, 1, 2, 1},
					{1, 0, 0, 2, 1}};
	queue<vector<int>> q;
	vector<int> subV;
	vector<int>::iterator it;
	int m=3,n=5;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			subV.push_back(matrix[i][j]);
			if(i>0) subV.push_back(matrix[i-1][j]);
			if(j>0) subV.push_back(matrix[i][j-1]);
			if(i<m-1) subV.push_back(matrix[i+1][j]);
			if(j<n-1) subV.push_back(matrix[i][j+1]);
			q.push(subV);
			subV.clear();
		}
	}
	while(!q.empty())
	{
		for(it=q.front().begin();it!=q.front().end();++it)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
		q.pop();
	}
}
