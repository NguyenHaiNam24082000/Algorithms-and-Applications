#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={2, 5, -1, 7, -3, -1, -2};
	int k=4;
	queue<int> subQ;
	queue<int> Q;
	int max,min,sum=0;
	for(int i=0;i<v.size()-k+1;++i)
	{
		for(int j=i;j<i+k;++j)
		{
			subQ.push(v[j]);
		}
		max=subQ.front();
		min=subQ.front();
		while(!subQ.empty())
		{
			if(subQ.front()>max)
			{
				max=subQ.front();
			}
			else if(subQ.front()<min)
			{
				min=subQ.front();
			}
			subQ.pop();
		}
		Q.push(max+min);
	}
	while(!Q.empty())
	{
		sum+=Q.front();
		Q.pop();
	}
	cout<<"Tong min va max: "<<sum;
}
