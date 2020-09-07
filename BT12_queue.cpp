#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5};
	queue<int> q;
	int n=2,count=1,t;
	for(int i=0;i<v.size();++i)
	{
		q.push(v[i]);
	}
	while(n>count)
	{
		t=q.front();
		q.pop();
		q.push(t);
		q.push(t);
		count++;
	}
	cout<<q.front()<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}	
}
