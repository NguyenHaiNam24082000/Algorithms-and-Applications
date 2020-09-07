#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1, 2, 3, 1, 4, 5, 2, 3, 6};
	int k=3;
	queue<int> subQ;
	queue<int> Q;
	int max;
	for(int i=0;i<v.size()-k+1;++i)
	{
		for(int j=i;j<i+k;++j)
		{
			subQ.push(v[j]);
		}
		max=subQ.front();
		while(!subQ.empty())
		{
			if(subQ.front()>max)
			{
				max=subQ.front();
			}
			subQ.pop();
		}
		Q.push(max);
	}
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
}
