#include<iostream>
#include<vector>
#include<queue>
using namespace std;
queue<int> firstNegative(vector<int> arr,int k)
{
	queue<int> q;
	int count=0;
	for(int i=0;i<arr.size()-k+1;++i)
	{
		count=0;
		for(int j=i;j<i+k;++j)
		{
			if(arr[j]<0)
			{
				q.push(arr[j]);
				break;
			}
			else count++;
		}
		if(count==k)
		{
			q.push(0);
		}
	}
	return q;
}
int main()
{
	int k=2;
	vector<int> arr={-8,-2,3,-6,10};
	queue<int> q=firstNegative(arr,k);
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}
